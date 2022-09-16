int my_puts (const char * str) {

		assert (str);

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

		assert (str);
		assert (isfinite (ch));

		int i = 0;

		while (*(str + i) != '\0') {

				if (*(str + i) == (char)ch)
						break;

				i++;
		}

		return (str + i);
}

unsigned int my_strlen (const char * str) {

		assert (str);

		int i = 0;

		while (*(str + i) != '\0')
				i++;

		return i;
}

char * my_strcpy (char * destptr, const char * strptr) {

		assert (destptr);
		assert (strptr);

		int i = 0;

		while (*(strptr + i) != '\0') {

				*(destptr + i) = *(strptr + i);
				i++;
		}

		*(destptr + i) = '\0';

		return destptr;
}

char * my_strncpy (char * destptr, const char * strptr, int size) {

		assert (destptr);
		assert (strptr);
		assert (isfinite (size));

		int i = 0;

		while (i != size && *(strptr + i) != '\0') {

				*(destptr + i) = *(strptr + i);
				i++;
		}

		*(destptr + i) = '\0';

		return destptr;
}

char * my_strcat (char * destptr, const char * strptr) {

		assert (destptr);
		assert (strptr);

		int i = strlen (strptr) + 1;

		while (*strptr != '\0') {

				*(destptr + i) = *strptr;
				strptr++;
				i++;
		}
		*(destptr + i) = '\0';

		return destptr;
}

char * my_strncat (char * destptr, const char  * strptr, int size) {

		assert (destptr);
		assert (strptr);
		assert (isfinite (size));

		int i = strlen(strptr), j = 0;

		while (j < size && *(strptr + j) != '\0') {

				*(destptr + i) = *(strptr + j);
				j++;
				i++;
		}
		* (destptr + i) = '\0';
		
		return destptr;
}

char * my_strdup (const char * str) {

		assert (str);

		return strcpy ((char *) calloc (sizeof (char), strlen (str) + 1), str);

}

char * my_fgets (char * str, int len, FILE * file) {

		assert (str);
		assert (isfinite (len));

		int i = 0;
		int ch = '\0';

		while ((ch = getc (file)) != EOF) {

				if (ch == '\n')
					break;

				*str = ch;
				str++;
				i++;

				if (i > len)
					return NULL;
		}
		
		*str = '\0';

		return str;
}

char * my_getline (char * buf, size_t num, char delim) {

		assert (buf);
		assert (isfinite (num));

		int i = 0;
		char ch = '\0';

		while ((ch = getchar()) != delim) {

				*buf = ch;
				i++;
				buf++;

				if (i >= num - 1)
						return NULL;
		}

		*buf = '\0';

		return buf;
}

size_t my_getline_1 (char ** buf, int len, FILE * file) {

		int ch = '\0', amount = 0;

		while ((ch = getc (file)) != '\n') {

				if (ch == EOF) {

						ch = '\0';
						break;
				}

				amount++;
		}

		if (amount == 0)
				return -1;

		if ((* buf) == NULL || len < amount)
				* buf = (char *) calloc (amount, sizeof (char));

		fseek (file, - (amount + 2), SEEK_CUR);
		amount = 0;

		while (strchr ("\n\0", (ch = getc (file))) == NULL) {

				* ((*buf) + amount) = ch;
				amount++;
		}

		return amount;
}
