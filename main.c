#include <stdio.h>
#include "string.h"

#define string struct string

void main(void) {
	string a = new("hello, ");
	a = pushs(a, "world");
	a = pushc(a, '!');
	a = pushcin(0, a, 'H');
	printf("%s\n", a.data);
}