/* Generated by ./xlat/gen.sh from ./xlat/sigaltstack_flags.in; do not edit. */

static const struct xlat sigaltstack_flags[] = {
#if defined(SS_ONSTACK) || (defined(HAVE_DECL_SS_ONSTACK) && HAVE_DECL_SS_ONSTACK)
 XLAT(SS_ONSTACK),
#endif
#if defined(SS_DISABLE) || (defined(HAVE_DECL_SS_DISABLE) && HAVE_DECL_SS_DISABLE)
 XLAT(SS_DISABLE),
#endif
 XLAT_END
};
