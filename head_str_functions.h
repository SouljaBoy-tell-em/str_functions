#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>


#define LEN 50


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
size_t my_getline_1 (char ** buf, int len, FILE * file);


void test_my_puts (void);
void test_my_strchr (void);
void test_my_strlen (void);
void test_my_strcpy (void);
void test_my_strncpy (void);
void test_my_strcat (void);
void test_my_strncat (void);
void test_my_strdup (void);
void test_my_fgets (void);
void test_my_getline (void);
void test_my_getline_1 (void);
