#include "main.h"

/**
  *_strcat - function that concatenates two strings
  *
  *@buffer: string destination
  *@src: string source
  *
  *Return: dest string
  */

void *_strcat(char *buffer, char *src)
{
	int i, j;

	for (i = 0; buffer[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		buffer[i] = src[j];
	}
	return (buffer);
}
