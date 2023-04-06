#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
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
	size_t count = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[0]))
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += options(format[i], args);
			i++;
		}
		count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
