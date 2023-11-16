#include "main.h"
/**
 * _strcpy - Function that copies a string
 * @dest: destination variable
 * @src: variable that contains the string
 * Return: dest
 **/

char *_strcpy(char *dest, const char *src)
{
	char *temp;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	temp = dest;
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
return (dest);
}
