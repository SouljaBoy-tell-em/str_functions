#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include "str.h"

int puts1 (const char * ar);
char * strchr1 (char * ar, int ch);
unsigned int strlen1 (const char * ar);
char * strcpy1 (char* before, const char* from);
char * strncpy1 (char* before, const char* from, int size);
char * strcat1 (char* before, const char* from);
char * strncat1 (char* before, const char* from, int size);
char * strdup1 (const char* ar);
char * f_gets (char * str, int len, FILE * fp);
char * get_line (char * buf, size_t num, char delim);

int main (void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	return 0;
}

