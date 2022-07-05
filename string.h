#include <stddef.h>

typedef struct string
{
	char *data;
	size_t len;
} string;

struct string pushs(struct string our, char *element);
struct string pushc(struct string our, char element);
struct string pushcin(int index, struct string our, char element);
struct string pop();
struct string new(char *our);
char getbe(int index, struct string str);
size_t getlen(struct string data);