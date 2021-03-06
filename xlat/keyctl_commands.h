/* Generated by ./xlat/gen.sh from ./xlat/keyctl_commands.in; do not edit. */

static const struct xlat keyctl_commands[] = {
#if !(defined(KEYCTL_GET_KEYRING_ID) || (defined(HAVE_DECL_KEYCTL_GET_KEYRING_ID) && HAVE_DECL_KEYCTL_GET_KEYRING_ID))
# define KEYCTL_GET_KEYRING_ID 0
#endif
 XLAT(KEYCTL_GET_KEYRING_ID),
#if !(defined(KEYCTL_JOIN_SESSION_KEYRING) || (defined(HAVE_DECL_KEYCTL_JOIN_SESSION_KEYRING) && HAVE_DECL_KEYCTL_JOIN_SESSION_KEYRING))
# define KEYCTL_JOIN_SESSION_KEYRING 1
#endif
 XLAT(KEYCTL_JOIN_SESSION_KEYRING),
#if !(defined(KEYCTL_UPDATE) || (defined(HAVE_DECL_KEYCTL_UPDATE) && HAVE_DECL_KEYCTL_UPDATE))
# define KEYCTL_UPDATE 2
#endif
 XLAT(KEYCTL_UPDATE),
#if !(defined(KEYCTL_REVOKE) || (defined(HAVE_DECL_KEYCTL_REVOKE) && HAVE_DECL_KEYCTL_REVOKE))
# define KEYCTL_REVOKE 3
#endif
 XLAT(KEYCTL_REVOKE),
#if !(defined(KEYCTL_CHOWN) || (defined(HAVE_DECL_KEYCTL_CHOWN) && HAVE_DECL_KEYCTL_CHOWN))
# define KEYCTL_CHOWN 4
#endif
 XLAT(KEYCTL_CHOWN),
#if !(defined(KEYCTL_SETPERM) || (defined(HAVE_DECL_KEYCTL_SETPERM) && HAVE_DECL_KEYCTL_SETPERM))
# define KEYCTL_SETPERM 5
#endif
 XLAT(KEYCTL_SETPERM),
#if !(defined(KEYCTL_DESCRIBE) || (defined(HAVE_DECL_KEYCTL_DESCRIBE) && HAVE_DECL_KEYCTL_DESCRIBE))
# define KEYCTL_DESCRIBE 6
#endif
 XLAT(KEYCTL_DESCRIBE),
#if !(defined(KEYCTL_CLEAR) || (defined(HAVE_DECL_KEYCTL_CLEAR) && HAVE_DECL_KEYCTL_CLEAR))
# define KEYCTL_CLEAR 7
#endif
 XLAT(KEYCTL_CLEAR),
#if !(defined(KEYCTL_LINK) || (defined(HAVE_DECL_KEYCTL_LINK) && HAVE_DECL_KEYCTL_LINK))
# define KEYCTL_LINK 8
#endif
 XLAT(KEYCTL_LINK),
#if !(defined(KEYCTL_UNLINK) || (defined(HAVE_DECL_KEYCTL_UNLINK) && HAVE_DECL_KEYCTL_UNLINK))
# define KEYCTL_UNLINK 9
#endif
 XLAT(KEYCTL_UNLINK),
#if !(defined(KEYCTL_SEARCH) || (defined(HAVE_DECL_KEYCTL_SEARCH) && HAVE_DECL_KEYCTL_SEARCH))
# define KEYCTL_SEARCH 10
#endif
 XLAT(KEYCTL_SEARCH),
#if !(defined(KEYCTL_READ) || (defined(HAVE_DECL_KEYCTL_READ) && HAVE_DECL_KEYCTL_READ))
# define KEYCTL_READ 11
#endif
 XLAT(KEYCTL_READ),
#if !(defined(KEYCTL_INSTANTIATE) || (defined(HAVE_DECL_KEYCTL_INSTANTIATE) && HAVE_DECL_KEYCTL_INSTANTIATE))
# define KEYCTL_INSTANTIATE 12
#endif
 XLAT(KEYCTL_INSTANTIATE),
#if !(defined(KEYCTL_NEGATE) || (defined(HAVE_DECL_KEYCTL_NEGATE) && HAVE_DECL_KEYCTL_NEGATE))
# define KEYCTL_NEGATE 13
#endif
 XLAT(KEYCTL_NEGATE),
#if !(defined(KEYCTL_SET_REQKEY_KEYRING) || (defined(HAVE_DECL_KEYCTL_SET_REQKEY_KEYRING) && HAVE_DECL_KEYCTL_SET_REQKEY_KEYRING))
# define KEYCTL_SET_REQKEY_KEYRING 14
#endif
 XLAT(KEYCTL_SET_REQKEY_KEYRING),
#if !(defined(KEYCTL_SET_TIMEOUT) || (defined(HAVE_DECL_KEYCTL_SET_TIMEOUT) && HAVE_DECL_KEYCTL_SET_TIMEOUT))
# define KEYCTL_SET_TIMEOUT 15
#endif
 XLAT(KEYCTL_SET_TIMEOUT),
#if !(defined(KEYCTL_ASSUME_AUTHORITY) || (defined(HAVE_DECL_KEYCTL_ASSUME_AUTHORITY) && HAVE_DECL_KEYCTL_ASSUME_AUTHORITY))
# define KEYCTL_ASSUME_AUTHORITY 16
#endif
 XLAT(KEYCTL_ASSUME_AUTHORITY),
#if !(defined(KEYCTL_GET_SECURITY) || (defined(HAVE_DECL_KEYCTL_GET_SECURITY) && HAVE_DECL_KEYCTL_GET_SECURITY))
# define KEYCTL_GET_SECURITY 17
#endif
 XLAT(KEYCTL_GET_SECURITY),
#if !(defined(KEYCTL_SESSION_TO_PARENT) || (defined(HAVE_DECL_KEYCTL_SESSION_TO_PARENT) && HAVE_DECL_KEYCTL_SESSION_TO_PARENT))
# define KEYCTL_SESSION_TO_PARENT 18
#endif
 XLAT(KEYCTL_SESSION_TO_PARENT),
#if !(defined(KEYCTL_REJECT) || (defined(HAVE_DECL_KEYCTL_REJECT) && HAVE_DECL_KEYCTL_REJECT))
# define KEYCTL_REJECT 19
#endif
 XLAT(KEYCTL_REJECT),
#if !(defined(KEYCTL_INSTANTIATE_IOV) || (defined(HAVE_DECL_KEYCTL_INSTANTIATE_IOV) && HAVE_DECL_KEYCTL_INSTANTIATE_IOV))
# define KEYCTL_INSTANTIATE_IOV 20
#endif
 XLAT(KEYCTL_INSTANTIATE_IOV),
#if !(defined(KEYCTL_INVALIDATE) || (defined(HAVE_DECL_KEYCTL_INVALIDATE) && HAVE_DECL_KEYCTL_INVALIDATE))
# define KEYCTL_INVALIDATE 21
#endif
 XLAT(KEYCTL_INVALIDATE),
#if !(defined(KEYCTL_GET_PERSISTENT) || (defined(HAVE_DECL_KEYCTL_GET_PERSISTENT) && HAVE_DECL_KEYCTL_GET_PERSISTENT))
# define KEYCTL_GET_PERSISTENT 22
#endif
 XLAT(KEYCTL_GET_PERSISTENT),
 XLAT_END
};
