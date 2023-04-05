#include "main.h"

/**
  *options - selection menu
  *
  *@opt: input character
  *@args: variadic arguments
  *
  *Return: string
  */

char *options(const char opt, va_list args)
{
	int i = 0;
	list select[] = {
		{'c', _str_char},
		{'s', _str_string},
		{'%', _str_percent},
		{'i', _str_int},
		{'d', _str_int},
		{'l', _str_int}
	};

	while (i < 7)
	{
		if (select[i].spec == opt)
			return (select[i].func(args));
		i++;
	}
	return (NULL);
}
