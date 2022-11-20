#include "main.h"
#include <stdarg.h>

/**
  *_putchar - function that prints characters
  *
  *@c: character argument
  *
  *Return: character
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
