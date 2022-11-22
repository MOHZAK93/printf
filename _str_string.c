#include "main.h"

/**
  *_str_string - function that returns a string
  *
  *@args: function argument
  *
  *Return: string pointer
  */

char *_str_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		return (NULL);
	return (str);
}
