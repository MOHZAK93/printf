#include "main.h"

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
	unsigned int i, count;

	if (format != NULL)
	{
		va_list args;
		char *str, *buffer;

		count = _strlen(format);
		buffer = malloc(sizeof(char) * (count + 1));

		if (buffer == NULL)
			return (-1);
		va_start(args, format);
		while (format && format[i] != '\0')
		{
			if (format[0] == '%' && format[1] == '\0')
			{
				return (-1);
			}
			i = _strncat(buffer, format, i);
			if (format[i] == '%')
			{
				i++;
				str = funch(format[i], args);
				_strcat(buffer, str);
			}
			if (format[i] != '\0')
				i++;
		}
		i = _strlen(buffer);
		write(1, buffer, i);
		va_end(args);
		free(buffer);
		return (i);
	}
	return (-1);
}
int main(void)
{
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	return (0);
}
