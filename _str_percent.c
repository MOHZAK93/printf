#include "main.h"

/**
  *_str_per - function that returns %
  *
  *@args: function arguments
  *
  *Return: pointer to %
  */

char *_str_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
		return (str);
	return (str);
}
