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
	unsigned int remainder, num, str = va_arg(args, unsigned int);
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
		str = str / 16;
		i++;
	}
	ptr = malloc(sizeof(char) * i);
	if (!ptr)
		return (-1);

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
