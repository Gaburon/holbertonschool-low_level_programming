#include "main.h"

/**
 *   _strcpy - Copia un string
 *   @dest: Destino
 *   @src: string base
 *   Return: El pointer al destino
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
