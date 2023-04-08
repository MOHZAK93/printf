#include "main.h"
#include <stdio.h>

/**
  *_str_hex - prints hexadecimal
  *
  *@args: function argument
  *
  *Return: number of bits
  */

int _str_hex(va_list args)
{
	long unsigned int remainder, num, str = va_arg(args, long unsigned int);
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
		str = str / 16;
		i++;
	}
	ptr = malloc(sizeof(char) * i);

	while (num)
	{
		remainder = num % 16;
		if (remainder > 9)
			remainder += 39;
		ptr[j] = remainder;
		num = num / 16;
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
