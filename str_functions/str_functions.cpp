#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>


int my_puts (const char * str);
char * my_strchr (char * str, int ch);
unsigned int my_strlen (const char * str);
char * my_strcpy (char * destptr, const char * srcptr);
char * my_strncpy (char * destptr, const char * srcptr, int size);
char * my_strcat (char * destptr, const char * srcptr);
char * my_strncat (char * destptr, const char * srcptr, int size);
char * my_strdup (const char * str);
char * my_fgets (char * str, int len, FILE * file);
char * my_getline (char * buf, size_t num, char delim);

// unit tests

int main () {

		SetConsoleCP (1251);
		SetConsoleOutputCP (1251);




}

int my_puts (const char * str) {

		int i = 0;

		while (*(str + i) != '\0') {

				putchar (*(str + i));
				i++;
		}

		if (*(str + i) == '\0') {

				putchar ('\n');
				return 0;
		}

		else
				return -1;
}

char * my_strchr (char * str, int ch) {

		int i = 0;

		while (*(str + i) != '\0') {

				if (*(str + i) == (char)ch)
						break;

				i++;
		}

		return (str + i);
}

unsigned int my_strlen (const char * str) {

		int i = 0;

		while (*(str + i) != '\0')
				i++;

		return i;
}

char * my_strcpy (char * destptr, const char * strptr) {

		int i = 0;

		while (*(strptr + i) != '\0') {

				*(destptr + i) = *(strptr + i);
				i++;
		}

		*(destptr + i) = '\0';

		return destptr;
}

char * my_strncpy (char * destptr, const char * strptr, int size) {

		int i = 0;

		while (i != size || *(strptr + i) != '\0') {

				*(destptr + i) = *(strptr + i);
				i++;
		}

		*(destptr + i) = '\0';

		return destptr;
}

char * my_strcat (char * destptr, const char * strptr) {

		int i = strlen (strptr);

		while (*strptr != '\0') {

				*(destptr + i) = *strptr;
				strptr++;
				i++;
		}

		return destptr;
}

char * my_strncat (char * destptr, const char  * strptr, int size) {

		int i = strlen(strptr), j = 0;

		while (j < size && *(strptr + j) != '\0') {

				*(destptr + i) = *(strptr + j);
				j++;
				i++;
		}

		return destptr;
}

char * my_strdup (const char * str) {

		return strcpy ((char *) calloc (sizeof (char), strlen (str) + 1), str);

}

char * my_fgets (char * str, int len, FILE * file) {

		int i = 0;
		int ch = '\0';

		while ((ch = getc (file)) != EOF) {

				if (*str = '\n')
						break;

				*str = ch;
				str++;
				i++;

				if (i > len)
						return NULL;
		}

		*(str + 1) = '\0';

		return str;
}

char * my_getline (char * buf, size_t num, char delim) {

		int i = 0;
		char ch = '\0';

		while ((ch = getchar()) != delim) {

				*buf = ch;
				i++;
				buf++;

				if (i >= num - 1)
						return NULL;
		}

		*(buf + 1) = '\0';

		return buf;
}
