#include "main.h"
#include <stdio.h>
/**
 * main - The Code Entry
 * Return: always return zero
 *
 */




int main (void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);

return (0);

}
