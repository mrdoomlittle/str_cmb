# ifndef __mdl__str__cmb__h
# define __mdl__str__cmb__h
# include <mdlint.h>
# define MDL_SC_FREE_BOTH 1
# define MDL_SC_FREE_LEFT 2
# define MDL_SC_FREE_RIGHT 3
# ifdef __cplusplus
extern "C" {
# endif
char* mdl_strcmb(char*, char*, mdl_u8_t);
# ifdef __cplusplus
}
namespace mdl {
static char*(*strcmb)(char*, char*, mdl_u8_t) = &mdl_strcmb;
}
# endif
# endif /*__mdl__str__cmb__h*/
