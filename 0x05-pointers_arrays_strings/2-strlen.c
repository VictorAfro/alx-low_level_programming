#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function to print the length of a string
 * @s: string to be supplied
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int a = 0; /* start the counter from 0*/

	for (; *s++;)
		a++;
	return (a);
}
