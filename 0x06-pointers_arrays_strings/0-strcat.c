#include "main.h"

/**
 * _strcat - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to desk
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (desk[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[j] != src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

