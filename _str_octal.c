#include "main.h"
#include <stdio.h>

/**
  *_str_octal - prints octal
  *
  *@args: function argument
  *
  *Return: number of bits
  */

int _str_octal(va_list args)
{
	int i = 0, j = 0, num, str = va_arg(args, int);
	char *ptr;

	if (str == 0)
	{
		_putchar('0');
		return (1);
	}
	num = str;
	while (str)
	{
		str = str / 8;
		i++;
	}
	ptr = malloc(sizeof(char) * i);

	while (num)
	{
		ptr[j] = num % 8;
		num = num / 8;
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
