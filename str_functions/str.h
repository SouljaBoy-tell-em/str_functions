#include <stdio.h>

int puts1 (const char * ar) {

	int i = 0;

	while (*(ar + i) != '\0') {

		putchar(*(ar + i));
		i++;

	}

	if (*(ar + i) == '\0') {
		putchar ('\n');
		return 0;
	}
	else
		return -1;

}

char * strchr1 (char * ar, int ch) {

	int i = 0;

	while (*(ar + i) != '\0') {

		if (*(ar + i) == (char)ch)
			break;
		
		i++;

	}

	return (ar + i);

}

unsigned int strlen1 (const char * ar) {

	int i = 0;

	while (*(ar + i) != '\0')
		i++;

	return i;

}

char * strcpy1 (char* before, const char* from) {

	int i = 0;

	while (* (before + i) != '\0') {

		* (before + i) = *(from + i);
		i++;
	}

	return before;

}

char * strncpy1 (char* before, const char* from, int size) {

	int i = 0;

	while (i != size) {

		* (before + i) = * (from + i);
		i++;

	}

	return before;

}

char * strcat1 (char* before, const char* from) {

	int i = 0, j = 1;

	while (*(before + i) != '\0')
		i++;

	*(before + i) = *from;
	i++;

	while (*from != '\0') {
		
		* (before + i) = *(from + j);
		from++;
		i++;
		
	}

	return before;

}

char * strncat1 (char* before, const char* from, int size) {

	int i = 0, j = 1;

	while (*(before + i) != '\0')
		i++;

	if (size != 0) {
		
		*(before + i) = *from;
		i++;
		
	}

	while (j < size) {
	
		* (before + i) = *(from + j);
		j++;
		i++;
		
	}

	return before;

}

char * strdup1 (const char* str) {

	int len = 0;
	char * ar;

	while ((*str) != '\0') {
		
		* ar = * str;
		str++;
		len++;
	
	}

	ar = (char *) malloc (sizeof (char) * len + 1);
	return ar;

}

char * f_gets (char * str, int len, FILE * fp) {

	char ch;
	char * ar;
	int i = 0;
	while (((* str) = getc (fp)) != EOF) {
		* ar = * str;
		ar++;
		str++;
		i++;
		
		if (i > len)
			return NULL;
	
	}
	
	return ar;

}

char * get_line (char * buf, size_t num, char delim) {

	int i = 0;
	char ch;
	while ((ch = getchar()) != delim) {
		* buf = ch;
		i++;
		buf++;
		
		if (i >= num - 1)
			return NULL;
	
	}
	
	return buf;

}
