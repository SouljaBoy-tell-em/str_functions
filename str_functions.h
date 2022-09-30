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
        
		int i = 0, len = strlen (destptr);

		while (*strptr != '\0') {

				* (destptr + len + i) = *strptr;
				i++;
                strptr++;
		}

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

	assert(str);
    assert(file);

    int i = 0, ch = getc(file);
    while ((i < len) && (ch != EOF) && (ch != '\n'))
    {
        str [i] = (char)ch;
        ch = getc(file);
        i++;
    }
    str [len] = '\0';

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

		fseek (file, - (amount + 1), SEEK_CUR);
		amount = 0;

		while (strchr ("\n\0", (ch = getc (file))) == NULL) {

				* ((*buf) + amount) = ch;
				amount++;
		}

		return amount;
}

void test_my_puts (void) {

    char str [] = "Hello, world!";

    printf ("Test function: my_puts ()\n");
    printf ("Inputing string: Hello, world!\n");
    printf ("Result: ");
    my_puts (str);
    printf ("\n\n");
}


void test_my_strchr (void) {

    char str [] = "0123456567890";
    int ch = '5';

    printf ("Test function: my_strchr()\n");
    printf ("Inputing string: %s\nInputing symbol: %d\n", str, 5);
    printf("Result: ");
    printf ("%p\nDeferencing: %d\n"
    "number: %d", my_strchr (str, ch), * my_strchr (str, ch), *my_strchr (str, ch) - '0');
    printf ("\n\n");
}


void test_my_strlen (void) {

    char str [] = "123456789";

    printf ("Test function: my_strlen ()\n");
    printf ("Inputing string: %s\n", str);
    printf ("Result: %d", my_strlen(str));
    printf ("\n\n");
}


void test_my_strcpy (void) {

    char str1 [] = "1234567890";
    char str2 [] = "12345\n678";

    printf ("Test function: my_strcpy ()\n");
    printf ("Inputing string #1: ");
    puts (str1);
    printf ("Inputing string #2: ");
    puts (str2);
    my_strcpy (str1, str2);
    printf ("Result: 1st string is ");
    puts (str1);
    printf ("\n\n");
}


void test_my_strncpy (void) {

    char str1 [] = "1234567890";
    char str2 [] = "12345\n678";
    int symbols = 5;

    printf ("Test function: my_strncpy ()\n");
    printf ("Inputing string #1: ");
    puts (str1);
    printf ("Inputing string #2: ");
    puts (str2);
    printf ("Amount of 1st symbols: %d\n", symbols);
    my_strncpy (str1, str2, symbols);
    printf ("Result: 1st string is ");
    puts (str1);
    printf ("\n\n");
}


void test_my_strcat (void) {

    char str1 [100] = "1234567890";
    char str2 [20] = "12345\n678";

    printf ("Test function: my_strcat ()\n");
    printf ("Inputing string #1: ");
    puts (str1);
    printf ("Inputing string #2: ");
    puts (str2);
    my_strcat (str1, str2);
    printf ("Result: 1st string is ");
    puts (str1);
    printf ("\n\n");
}


void test_my_strncat (void) {

    char str1 [100] = "1234567890";
    char str2 [20] = "12345\n678";
    int amount = 3;

    printf ("Test function: my_strncat ()\n");
    printf ("Inputing string #1: ");
    puts (str1);
    printf ("Inputing string #2: ");
    puts (str2);
    printf ("Amount of symbols: %d\n", amount);
    my_strncat (str1, str2, amount);
    printf ("Result: 1st string is ");
    puts (str1);
    printf ("\n\n");
}


void test_my_strdup (void) {

	char str1 [] = "1234567890";
    char * str2 = my_strdup (str1);

	printf ("Test function: my_strdup ()\n");
    printf ("Inputing string #1: ");
    puts (str1); 
    printf ("Result: 2nd string is ");
    puts(str2);
    printf ("\n\n");
}


void test_my_fgets (void) {

	FILE * file = fopen("file.txt", "r");
    char str [LEN];

	printf ("Test function: my_fgets ()\n");
    printf ("String in the file: ");
    my_fgets (str, LEN, file);
    puts (str);
    printf ("\n\n");
    fclose (file);
}


void test_my_getline (void) {

	char str [LEN];
	char delim = 'w';

	printf ("Test function: my_getline ()\n");
	printf ("delim-symbol: %c\n", delim);
	my_getline (str, 0, delim);
	printf ("Result: ");
	puts (str);
    printf ("\n\n");

}


void test_my_getline_1 (void) {

    char * str = (char * ) calloc (30, sizeof (char));
    FILE * file = fopen ("file.txt", "r");

    printf ("Test function: my_getline_1 ()\n");
    my_getline_1 (&str, 30, file);
    printf ("result: ");
    puts (str);
    fclose (file);
    printf ("\n\n");
}
