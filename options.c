#include "main.h"

/**
  *options - selection menu
  *
  *@opt: input character
  *@args: variadic arguments
  *
  *Return: number of characters
  */

int options(const char opt, va_list args)
{
	int i = 0, count = 0;
	list select[] = {
		{'c', _str_char},
		{'s', _str_string},
		{'%', _str_percent},
		{'i', _str_int},
		{'d', _str_int},
		{'l', _str_int},
		{'u', _str_int},
		{0, NULL}
	};

	while (select[i].spec)
	{
		if (select[i].spec == opt)
			count += select[i].func(args);
		i++;
	}

	return (count);
}
