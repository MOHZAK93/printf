#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
  *_printf - function that produces output
  *according to format
  *
  *@format: character string
  *
  *Return: number of characters
  */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str;
	size_t count;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			str = (options(format[i], args));
			count = _strlen(str);
			write(1, str, count);
			i++;
		}
		write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (i);
}
