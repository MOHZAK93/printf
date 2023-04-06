#include "main.h"

/**
  *_str_string - function that returns a string
  *
  *@args: function argument
  *
  *Return: number of characters
  */

int _str_string(va_list args)
{
	int i, j = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = NULL;

	if (!str[0])
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
		j += _putchar(str[i]);
	return (j);
}
