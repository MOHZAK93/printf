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
	unsigned int num, str = va_arg(args, unsigned int);
	int i = 0, j = 0, check;
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
	if (!ptr)
		return (-1);

	while (num)
	{
		ptr[j] = num % 8;
		num = num / 8;
		j++;
	}

	while (--j >= 0)
	{
		check = _putchar(ptr[j] + '0');
		if (check == -1)
		{
			free(ptr);
			return (-1);
		}
	}
	free(ptr);
	ptr = NULL;
	return (i);
}
