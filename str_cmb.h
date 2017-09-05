# ifndef __mdl__str__cmb__h
# define __mdl__str__cmb__h
# include <mdlint.h>
# define MDL_SC_FREE_BOTH 1
# define MDL_SC_FREE_LEFT 2
# define MDL_SC_FREE_RIGHT 3
# ifdef __cplusplus
extern "C" {
# endif
char* mdl_str_cmb(char*, char*, mdl_u8_t);
# ifdef __cplusplus
}
namespace mdl {
char*(*str_cmb)(char*, char*, mdl_u8_t) = &mdl_str_cmb;
}
# endif
# endif /*__mdl__str__cmb__h*/
