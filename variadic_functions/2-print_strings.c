#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints a string
 * @separator: seperator char
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *stringspoint;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		stringspoint = va_arg(strings, char *);
		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (stringspoint == NULL)
			printf("(nil)");
		else
			printf("%s", stringspoint);
	}
	va_end(strings);
	printf("\n");
}
