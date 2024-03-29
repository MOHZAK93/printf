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
	int (*func)(va_list args);
} list;

int _printf(const char *format, ...);
int _strlen(const char *s);
int _str_int(va_list args);
int _str_unsigned(va_list args);
int _str_char(va_list args);
int _str_string(va_list args);
int _str_percent(va_list args);
int options(const char opt, va_list args);
void *_strcat(char *buffer, char *src);
int (*fun)(va_list args);
int _strncat(char *buff, const char *format, int n);
int _putchar(char c);
int _str_binary(va_list args);
int _str_octal(va_list args);
int _str_hex(va_list args);
int _str_heX(va_list args);
#endif
