#include "head_str_functions.h"
#include "str_functions.cpp"


int main (void) {

    test_my_puts ();
    test_my_strchr ();
    test_my_strlen ();
    test_my_strcpy ();
    test_my_strncpy ();
    test_my_strcat ();
    test_my_strncat ();
    test_my_strdup ();
    test_my_fgets ();
	test_my_getline ();

    return 0;
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

    char str1 [] = "1234567890";
    char str2 [] = "12345\n678";
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

    char str1 [] = "1234567890";
    char str2 [] = "12345\n678";
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

	printf ("Test function: my_strdup ()\n");
    char str1 [] = "1234567890";
    char * str2 = my_strdup (str1);
    printf ("Inputing string #1: ");
    puts (str1);
    printf ("Result: 2nd string is ");
    puts(str2);
    printf ("\n\n");
}

void test_my_fgets (void) {
	
	printf ("Test function: my_fgets ()\n");
    FILE * file = fopen("file.txt", "r");
    char str [LEN];
    printf ("String in the file: ");
    my_fgets (str, LEN, file);
    puts (str);
    printf ("\n\n");
}

void test_my_getline (void) {
	
	printf ("Test function: my_getline ()\n");
	char str [LEN];
	char delim = 'w';
	printf ("delim-symbol: %c\n", delim);
	my_getline (str, 0, delim);
	printf ("Result: ");
	puts (str);
	
}
