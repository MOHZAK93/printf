#ifndef MAIN_H
#define MAIN_H

/* libraries to use */
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

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
#endif
