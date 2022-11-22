#include "main.h"

/**
  *funch - selection menu
  *
  *@opt: input character
  *@args: variadic arguments
  *
  *Return: string
  */

char *funch(const char opt, va_list args)
{
	char *tmp;

	list select[] = {
		{'c', _str_char},
		{'s', _str_string},
		{'%', _str_per},
		{'i', _str_int},
		{'d', _str_int},
		{'l', _str_int},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (select[i].spec != opt && i < 7)
		i++;
	tmp = select[i].func(args);
	return (tmp);
}
