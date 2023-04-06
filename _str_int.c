#include "main.h"

/**
  *_str_int - function that prints integers
  *
  *@args: arguments of function
  *
  *Return: number of characters
  */

int _str_int(va_list args)
{
	int count = 0, j = 1;
	long int num, numx;

	num = va_arg(args, int);

	if (num < 0)
	{
		count += _putchar('-');
		num = num * -1;
	}
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
