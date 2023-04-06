#include "main.h"

/**
  *_str_char - function that returns a character
  *
  *@args: function argument
  *
  *Return: character pointer
  */

int _str_char(va_list args)
{
	char str = va_arg(args, int);

	_putchar(str);

	return (1);
}
