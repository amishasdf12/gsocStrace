/*
 * Copyright (c) 1991, 1992 Paul Kranenburg <pk@cs.few.eur.nl>
 * Copyright (c) 1993 Branko Lankester <branko@hacktic.nl>
 * Copyright (c) 1993, 1994, 1995, 1996 Rick Sladkey <jrs@world.std.com>
 * Copyright (c) 1996-2001 Wichert Akkerman <wichert@cistron.nl>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "defs.h"
#include <asm/ioctl.h>
#include "xlat/ioctl_dirs.h"

#ifdef HAVE_LINUX_INPUT_H
# include <linux/input.h>
#endif

#include "xlat/evdev_abs.h"
#include "xlat/evdev_ev.h"

static int
compare(const void *a, const void *b)
{
	const unsigned int code1 = (const unsigned long) a;
	const unsigned int code2 = ((struct_ioctlent *) b)->code;
	return (code1 > code2) ? 1 : (code1 < code2) ? -1 : 0;
}

const struct_ioctlent *
ioctl_lookup(const unsigned int code)
{
	struct_ioctlent *iop;

	iop = bsearch((const void *) (const unsigned long) code, ioctlent,
			nioctlents, sizeof(ioctlent[0]), compare);
	while (iop > ioctlent) {
		iop--;
		if (iop->code != code) {
			iop++;
			break;
		}
	}
	return iop;
}

const struct_ioctlent *
ioctl_next_match(const struct_ioctlent *iop)
{
	const unsigned int code = iop->code;
	iop++;
	if (iop < ioctlent + nioctlents && iop->code == code)
		return iop;
	return NULL;
}

void
ioctl_print_code(const unsigned int code)
{
	tprints("_IOC(");
	printflags(ioctl_dirs, _IOC_DIR(code), "_IOC_???");
	tprintf(", 0x%02x, 0x%02x, 0x%02x)",
		_IOC_TYPE(code), _IOC_NR(code), _IOC_SIZE(code));
}

static int
evdev_decode_number(unsigned int arg)
{
	unsigned int nr = _IOC_NR(arg);

	if (_IOC_DIR(arg) == _IOC_WRITE) {
		if (nr >= 0xc0 && nr <= 0xc0 + 0x3f) {
			tprints("EVIOCSABS(");
			printxval(evdev_abs, nr - 0xc0, "EV_???");
			tprints(")");
			return 1;
		}
	}

	if (_IOC_DIR(arg) != _IOC_READ)
		return 0;

	if (nr >= 0x20 && nr <= 0x20 + 0x1f) {
		tprints("EVIOCGBIT(");
		printxval(evdev_ev, nr - 0x20, "EV_???");
		tprintf(", %u)", _IOC_SIZE(arg));
		return 1;
	} else if (nr >= 0x40 && nr <= 0x40 + 0x3f) {
		tprints("EVIOCGABS(");
		printxval(evdev_abs, nr - 0x40, "ABS_???");
		tprints(")");
		return 1;
	}

	switch (_IOC_NR(nr)) {
		case 0x06:
			tprintf("EVIOCGNAME(%u)", _IOC_SIZE(arg));
			return 1;
		case 0x07:
			tprintf("EVIOCGPHYS(%u)", _IOC_SIZE(arg));
			return 1;
		case 0x08:
			tprintf("EVIOCGUNIQ(%u)", _IOC_SIZE(arg));
			return 1;
		case 0x09:
			tprintf("EVIOCGPROP(%u)", _IOC_SIZE(arg));
			return 1;
		case 0x0a:
			tprintf("EVIOCGMTSLOTS(%u)", _IOC_SIZE(arg));
			return 1;
		case 0x18:
			tprintf("EVIOCGKEY(%u)", _IOC_SIZE(arg));
			return 1;
		case 0x19:
			tprintf("EVIOCGLED(%u)", _IOC_SIZE(arg));
			return 1;
		case 0x1a:
			tprintf("EVIOCGSND(%u)", _IOC_SIZE(arg));
			return 1;
		case 0x1b:
			tprintf("EVIOCGSW(%u)", _IOC_SIZE(arg));
			return 1;
		default:
			return 0;
	}
}

static int
hiddev_decode_number(unsigned int arg)
{
	if (_IOC_DIR(arg) == _IOC_READ) {
		switch (_IOC_NR(arg)) {
			case 0x04:
				tprintf("HIDIOCGRAWNAME(%u)", _IOC_SIZE(arg));
				return 1;
			case 0x05:
				tprintf("HIDIOCGRAWPHYS(%u)", _IOC_SIZE(arg));
				return 1;
			case 0x06:
				tprintf("HIDIOCSFEATURE(%u)", _IOC_SIZE(arg));
				return 1;
			case 0x12:
				tprintf("HIDIOCGPHYS(%u)", _IOC_SIZE(arg));
				return 1;
			default:
				return 0;
		}
	} else if (_IOC_DIR(arg) == (_IOC_READ | _IOC_WRITE)) {
		switch (_IOC_NR(arg)) {
			case 0x06:
				tprintf("HIDIOCSFEATURE(%u)", _IOC_SIZE(arg));
				return 1;
			case 0x07:
				tprintf("HIDIOCGFEATURE(%u)", _IOC_SIZE(arg));
				return 1;
			default:
				return 0;
		}
	}

	return 0;
}

int
ioctl_decode_command_number(unsigned int arg)
{
	switch (_IOC_TYPE(arg)) {
		case 'E':
			return evdev_decode_number(arg);
		case 'H':
			return hiddev_decode_number(arg);
		case 'M':
			if (_IOC_DIR(arg) == _IOC_WRITE) {
				tprintf("MIXER_WRITE(%u)", _IOC_NR(arg));
				return 1;
			} else if (_IOC_DIR(arg) == _IOC_READ) {
				tprintf("MIXER_READ(%u)", _IOC_NR(arg));
				return 1;
			}
			return 0;
		case 'U':
			if (_IOC_DIR(arg) == _IOC_READ && _IOC_NR(arg) == 0x2c) {
				tprintf("UI_GET_SYSNAME(%u)", _IOC_SIZE(arg));
				return 1;
			}
			return 0;
		case 'j':
			if (_IOC_DIR(arg) == _IOC_READ && _IOC_NR(arg) == 0x13) {
				tprintf("JSIOCGNAME(%u)", _IOC_SIZE(arg));
				return 1;
			}
			return 0;
		case 'k':
			if (_IOC_DIR(arg) == _IOC_WRITE && _IOC_NR(arg) == 0) {
				tprintf("SPI_IOC_MESSAGE(%u)", _IOC_SIZE(arg));
				return 1;
			}
			return 0;
		default:
			return 0;
	}
}

int
ioctl_decode(struct tcb *tcp, unsigned int code, long arg)
{
	switch (_IOC_TYPE(code)) {
#if defined(ALPHA) || defined(POWERPC)
	case 'f': case 't': case 'T':
#else /* !ALPHA */
	case 0x54:
#endif /* !ALPHA */
		return term_ioctl(tcp, code, arg);
	case 0x89:
		return sock_ioctl(tcp, code, arg);
	case 'p':
		return rtc_ioctl(tcp, code, arg);
	case 0x03:
	case 0x12:
	case 'X':
		return block_ioctl(tcp, code, arg);
#ifdef HAVE_SCSI_SG_H
	case 0x22:
		return scsi_ioctl(tcp, code, arg);
#endif
	case 'L':
		return loop_ioctl(tcp, code, arg);
	case 'M':
		return mtd_ioctl(tcp, code, arg);
	case 'o':
	case 'O':
		return ubi_ioctl(tcp, code, arg);
	case 'V':
		return v4l2_ioctl(tcp, code, arg);
	case '=':
		return ptp_ioctl(tcp, code, arg);
#ifdef HAVE_LINUX_INPUT_H
	case 'E':
		return evdev_ioctl(tcp, code, arg);
#endif
	default:
		break;
	}
	return 0;
}

/*
 * Registry of ioctl characters, culled from
 *	@(#)ioccom.h 1.7 89/06/16 SMI; from UCB ioctl.h 7.1 6/4/86
 *
 * char	file where defined		notes
 * ----	------------------		-----
 *   F	sun/fbio.h
 *   G	sun/gpio.h
 *   H	vaxif/if_hy.h
 *   M	sundev/mcpcmd.h			*overlap*
 *   M	sys/modem.h			*overlap*
 *   S	sys/stropts.h
 *   T	sys/termio.h			-no overlap-
 *   T	sys/termios.h			-no overlap-
 *   V	sundev/mdreg.h
 *   a	vaxuba/adreg.h
 *   d	sun/dkio.h			-no overlap with sys/des.h-
 *   d	sys/des.h			(possible overlap)
 *   d	vax/dkio.h			(possible overlap)
 *   d	vaxuba/rxreg.h			(possible overlap)
 *   f	sys/filio.h
 *   g	sunwindow/win_ioctl.h		-no overlap-
 *   g	sunwindowdev/winioctl.c		!no manifest constant! -no overlap-
 *   h	sundev/hrc_common.h
 *   i	sys/sockio.h			*overlap*
 *   i	vaxuba/ikreg.h			*overlap*
 *   k	sundev/kbio.h
 *   m	sundev/msio.h			(possible overlap)
 *   m	sundev/msreg.h			(possible overlap)
 *   m	sys/mtio.h			(possible overlap)
 *   n	sun/ndio.h
 *   p	net/nit_buf.h			(possible overlap)
 *   p	net/nit_if.h			(possible overlap)
 *   p	net/nit_pf.h			(possible overlap)
 *   p	sundev/fpareg.h			(possible overlap)
 *   p	sys/sockio.h			(possible overlap)
 *   p	vaxuba/psreg.h			(possible overlap)
 *   q	sun/sqz.h
 *   r	sys/sockio.h
 *   s	sys/sockio.h
 *   t	sys/ttold.h			(possible overlap)
 *   t	sys/ttycom.h			(possible overlap)
 *   v	sundev/vuid_event.h		*overlap*
 *   v	sys/vcmd.h			*overlap*
 *   V	linux/videodev2.h
 *
 * End of Registry
 */
