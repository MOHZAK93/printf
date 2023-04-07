#include "main.h"
#include <stdio.h>

/**
  *_str_binary - prints binary
  *
  *@args: function argument
  *
  *Return: number of bits
  */

int _str_binary(va_list args)
{
	int i = 0, j = 0, num, str = va_arg(args, int);
	char *ptr;

	num = str;
	while (str)
	{
		str = str / 2;
		i++;
	}
	ptr = malloc(sizeof(char) * i);

	while (num)
	{
		ptr[j] = num % 2;
		num = num / 2;
		j++;
	}

	while (--j >= 0)
	{
		_putchar(ptr[j] + '0');
	}
	free(ptr);
	ptr = NULL;
	return (i);
}
