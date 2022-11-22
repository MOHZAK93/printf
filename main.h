#ifndef MAIN_H
#define MAIN_H

/* libraries to use */
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

/**
 * struct pr - struct for operations
 * @op: operation
 * @f: to be listed
 *
 * Description: Checks if there's an operation
 */
typedef struct pr
{
	char *op;
	int (*f)(va_list);
} pr_f;

<<<<<<< HEAD
/**
  *struct print - structure for spec and function
  *
  *@spec: character to locate function
  *@func: pointer to function
  */

typedef struct print
{
	char spec;
	char *(*func)(va_list args);
} list;
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *s);
char *_str_int(va_list args);
char *_str_char(va_list args);
char *_str_string(va_list args);
char *_str_percent(va_list args);
char *funch(const char opt, va_list args);
void *_strcat(char *buffer, char *src);
int _strncat(char *buff, const char *format, int n);
=======
/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);
int print_i(va_list list);
int print_d(va_list list);
int print_r(va_list list);
int print_mod(va_list list);
int print_d(va_list list);
int _strlen(char *s);
int _funcion(const char *format, pr_f ops[], va_list ap);
>>>>>>> 5b47b1c0d7e5184b5ac9edc16e3be9ae734bcb77
#endif
