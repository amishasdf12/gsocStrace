/* Generated by ./xlat/gen.sh from ./xlat/fdflags.in; do not edit. */

static const struct xlat fdflags[] = {
#if defined(FD_CLOEXEC) || (defined(HAVE_DECL_FD_CLOEXEC) && HAVE_DECL_FD_CLOEXEC)
 XLAT(FD_CLOEXEC),
#endif
 XLAT_END
};