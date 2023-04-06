#include "main.h"

/**
  *_str_char - function that returns a character
  *
  *@args: function argument
  *
  *Return: character pointer
  */

char *_str_char(va_list args)
{
	char *str;

	str = malloc(sizeof(*str));

	str[0] = va_arg(args, int);
	return (str);
}
