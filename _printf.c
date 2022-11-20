#include "main.h"

/**
  *_putchar - function that prints characters
  *
  *@c: character argument
  *
  *Return: character
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
	int num = 0, i = 0, count;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[++i] == 'c')
		{
			_putchar(va_arg(args, int));
			num++;
			i++;
		}
		if (format[i] == 's' && format[i - 1] == '%')
		{
			char *str = va_arg(args, char *);

			for (count = 0; str[count] != '\0'; count++)
				;
			write(1, str, count);
			num += count;
		}
		else
		{
			_putchar(format[i]);
			num++;
		}
		i++;
	}
	va_end(args);
	return (num - 1);
}
