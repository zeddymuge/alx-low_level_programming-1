#include "main.h"
/**
 * _strncpy - entry point
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' ; i++)
	{
		if (src[i] == src[n])
		{
			dest[i] = '\0';
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}
