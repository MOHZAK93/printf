#include "main.h"

/**
  *_str_unsigned - function that prints unsigned integers
  *
  *@args: arguments of function
  *
  *Return: number of characters
  */

int _str_unsigned(va_list args)
{
	int count = 0, j = 1;
	long unsigned int num, numx;
	
	num = va_arg(args, unsigned int);
	
	if (num < 10)
		return (count += _putchar(num + '0'));

	numx = num;

	while (numx > 9)
	{
		numx = numx / 10;
		j *= 10;
	}
	while (j >= 1)
	{
		count += _putchar(((num / j) % 10) + 48);
		j = j / 10;
	}

	return (count);
}
