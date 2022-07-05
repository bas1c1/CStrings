#include <stdlib.h>
#include "string.h"
#include <string.h>

size_t getlen(struct string data) {
	return (size_t)strlen(data.data);
}

struct string pushs(struct string our, char *element) {
	struct string temp;
	temp.data = (char*)malloc(getlen(our)+1);
	temp.len  = getlen(temp);
	strcpy(temp.data, our.data);
	strcat(temp.data, element);
	return temp;
}

struct string pushc(struct string our, char element) {
    char *str2 = malloc(getlen(our) + 1 + 1);
    strcpy(str2, our.data);
    str2[getlen(our)] = element;
    str2[getlen(our) + 1] = '\0';
	return new(str2);
}

struct string pushcin(int index, struct string our, char element) {
    char *str2 = malloc(getlen(our) + 1 + 1);
    strcpy(str2, our.data);
    str2[index] = element;
    str2[getlen(our) + 1] = '\0';
	return new(str2);
}

struct string pop(struct string our) {
	struct string temp;
	temp.data = (char*)malloc(getlen(our)-1);
	temp.len  = getlen(temp);
	strcpy(temp.data, our.data);
	temp.data[strlen(temp.data)-1] = '\0';
	return temp;
}

char getbe(int index, struct string our) {
	return our.data[index];
}

struct string new(char *our) {
	struct string temp;
	temp.data = our;
	return temp;
}