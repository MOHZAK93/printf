#include "main.h"

/**
  *_str_int - function that returns a pointer to int charaters
  *
  *@args: arguments of function
  *
  *Return: pointer to string
  */

char *_str_int(va_list args)
{
	int num, hold, i, j;
	char *str;

	str = malloc(10 * sizeof(*str));
	num = va_arg(args, int);

	if (num < 0)
	{
		num *= -1;
		str[0] = '-';
		i = 1;
	}
	else
	{
		i = 0;
	}

	j = 1;
	hold = num;
	while (num > 9)
	{
		num = num / 10;
		j *= 10;
	}
	while (j >= 1)
	{
		str[i] = (((hold / j) % 10) + 48);
		i++;
		j = j / 10;
	}
	return (str);
}
