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
	unsigned int i = 0, count = 0;
	va_list args;
	char *str;
	ssize_t num = 0;

	va_start(args, format);

	if (format)
	{
		while (format && format[i])
		{
			if (format[i] == '%')
			{
				i++;
				str = (options(format[i], args));
				count = _strlen(str);
				num += write(1, str, count);
				i++;
			}
			num += write(1, &format[i], 1);
			i++;
		}
		va_end(args);
		return (num);
	}
	return (-1);
}
