#include "main.h"

/** 
*_strcat - concatenates two strings
*@dest: A pointer to a character that will be changed
*@src: A pointer to a character that will also be changed
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
