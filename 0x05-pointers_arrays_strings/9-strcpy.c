#include "main.h"

/**
* _strcpy - copies string at the end of another string including \0.
* @dest: pointer to string to be copied to.
* @src: pointer to string to be copied.
* Return: pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';
	return (dest);
}
