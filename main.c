# include <mdl/strcmb.h>
# include <stdio.h>
int main(void) {
	char *str = mdl_strcmb("Hello ", "World", 0);


	printf("%s\n", str);
}
