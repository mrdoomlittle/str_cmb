# include "str_cmb.h"
# ifdef __FFLY_ENGINE
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
char* mdl_str_cmb(char *__s1, char *__s2, mdl_u8_t __flag) {
	mdl_uint_t s1_len = strlen(__s1), s2_len = strlen(__s2);
	mdl_uint_t n_len = s1_len+s2_len+1;

	char *str_ret = (char*)_malloc(n_len);
	strncpy(str_ret, __s1, s1_len);
	strncpy(str_ret+s1_len, __s2, s2_len);
	*(str_ret+n_len-1) = '\0';
	switch(__flag) {
		case MDL_SC_FREE_BOTH:
			_free(__s1);
			_free(__s2);
		break;

		case MDL_SC_FREE_LEFT:
			_free(__s1);
		break;

		case MDL_SC_FREE_RIGHT:
			_free(__s2);
		break;
	}

	return str_ret;
}
