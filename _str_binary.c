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
	long unsigned int num, str = va_arg(args, long unsigned int);
	int i = 0, j = 0;
	char *ptr;

	if (str == 0)
	{
		_putchar('0');
		return (1);
	}
	num = str;
	while (str)
	{
		str = str / 2;
		i++;
	}
	ptr = malloc(sizeof(char) * i);
	if (!ptr)
		return (-1);

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
