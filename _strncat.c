#include "main.h"

/**
  *_strncat - function that concatenates two strings
  *
  *@buffer: final destination
  *@format: source of string
  *@n: position in format
  *
  *Return: destination string
  */

int _strncat(char *buffer, const char *format, int n)
{
	int i;

	i = 0;
	while (buffer[i] != NULL)
		i++;
	while (format[n] != NULL && format[n] != '%')
	{
		buffer[i] = format[n];
		i++;
		n++;
	}
	return (n);
}
