/* Generated by ./xlat/gen.sh from ./xlat/bt_protocols.in; do not edit. */

static const struct xlat bt_protocols[] = {
#if defined(BTPROTO_L2CAP) || (defined(HAVE_DECL_BTPROTO_L2CAP) && HAVE_DECL_BTPROTO_L2CAP)
 XLAT(BTPROTO_L2CAP),
#endif
#if defined(BTPROTO_HCI) || (defined(HAVE_DECL_BTPROTO_HCI) && HAVE_DECL_BTPROTO_HCI)
 XLAT(BTPROTO_HCI),
#endif
#if defined(BTPROTO_SCO) || (defined(HAVE_DECL_BTPROTO_SCO) && HAVE_DECL_BTPROTO_SCO)
 XLAT(BTPROTO_SCO),
#endif
#if defined(BTPROTO_RFCOMM) || (defined(HAVE_DECL_BTPROTO_RFCOMM) && HAVE_DECL_BTPROTO_RFCOMM)
 XLAT(BTPROTO_RFCOMM),
#endif
#if defined(BTPROTO_BNEP) || (defined(HAVE_DECL_BTPROTO_BNEP) && HAVE_DECL_BTPROTO_BNEP)
 XLAT(BTPROTO_BNEP),
#endif
#if defined(BTPROTO_CMTP) || (defined(HAVE_DECL_BTPROTO_CMTP) && HAVE_DECL_BTPROTO_CMTP)
 XLAT(BTPROTO_CMTP),
#endif
#if defined(BTPROTO_HIDP) || (defined(HAVE_DECL_BTPROTO_HIDP) && HAVE_DECL_BTPROTO_HIDP)
 XLAT(BTPROTO_HIDP),
#endif
#if defined(BTPROTO_AVDTP) || (defined(HAVE_DECL_BTPROTO_AVDTP) && HAVE_DECL_BTPROTO_AVDTP)
 XLAT(BTPROTO_AVDTP),
#endif
 XLAT_END
};
