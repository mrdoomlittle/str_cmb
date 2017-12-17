# include "str_cmb.h"
# ifdef __ffly_engine
#	include <firefly/memory/mem_alloc.h>
#	include <firefly/memory/mem_free.h>
#	define _malloc(_X) __ffly_mem_alloc(_X)
#	define _free(_X) __ffly_mem_free(_X)
# else
# 	include <malloc.h>
#	define _malloc(_X) malloc(_X)
#	define _free(_X) free(_X)
# endif
# include <string.h>
char* mdl_str_cmb(char *__s1, char *__s2, mdl_u8_t __opt) {
	if (!__s1 && !__s2) return NULL;
	mdl_uint_t s1_len = !__s1? 0:strlen(__s1), s2_len = !__s2? 0:strlen(__s2);
	mdl_uint_t n_len = s1_len+s2_len+1;

	char *str_ret = (char*)_malloc(n_len);
	if (__s1 != NULL) strncpy(str_ret, __s1, s1_len);
	if (__s2 != NULL) strncpy(str_ret+s1_len, __s2, s2_len);
	*(str_ret+n_len-1) = '\0';
	switch(__opt) {
		case _mdl_stc_free_both:
			if (__s1 != NULL) _free(__s1);
			if (__s2 != NULL) _free(__s2);
		break;
		case _mdl_stc_free_lhs:
			if (__s1 != NULL) _free(__s1);
		break;
		case _mdl_stc_free_rhs:
			if (__s2 != NULL) _free(__s2);
		break;
	}
	return str_ret;
}
