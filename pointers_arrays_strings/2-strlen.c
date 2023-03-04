#include "main.h"
/**
 * _strlen - da el character string
 *
 * @s: character para tomar el string
 * Return: returns tamaño del string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
