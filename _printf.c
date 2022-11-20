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

	if (format != NULL)
	{
		va_list args;
		char *str, *s;

		count = _strlen(format);
		s = malloc(sizeof(char) * (count + 1));
		if (s == NULL)
			return (-1);
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
				str = va_arg(args, char *);
				count = _strlen(str);
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
		free(s);
		return (num - 1);
	}
	return (-1);
}
