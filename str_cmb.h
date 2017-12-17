# ifndef __mdl__str__cmb__h
# define __mdl__str__cmb__h
# include <mdlint.h>
# define _mdl_stc_free_both 0x1
# define _mdl_stc_free_lhs 0x2
# define _mdl_stc_free_rhs 0x3
# ifdef __cplusplus
extern "C" {
# endif
char* mdl_str_cmb(char*, char*, mdl_u8_t);
# ifdef __cplusplus
}
namespace mdl {
static char*(*str_cmb)(char*, char*, mdl_u8_t) = &mdl_str_cmb;
}
# endif
# endif /*__mdl__str__cmb__h*/
