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
	int i = 0, count = 0, count_f;
	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format && format[i])
	{
		count_f = 0;
		if (format[i] == '%')
		{
			i++;
			if (!format[i] || (format[i] == ' ' && !format[i + 1]))
			{
				count = -1;
				break;
			}
			count_f += options(format[i], args);
			if (count_f == 0)
				count += _putchar(format[i]);
			if (count_f == -1)
				count = -1;
		}
		else
		{
			if (count == -1)
				_putchar(format[i]);
			else
				count += _putchar(format[i]);
		}
		i++;
		if (count != -1)
			count += count_f;
	}
	va_end(args);
	return (count);
}
