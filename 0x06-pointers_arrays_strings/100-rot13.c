#include <string.h>
#include <stdio.h>


char *rot13(char *n)
{
char upperside[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char lowerside[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i,j;
	int uppersidelength = strlen(upperside);

	for (i = 0; n[i] != '\0'; i++)
	{

		for (j = 0; j < uppersidelength; j++)
		{
			if (n[i] == upperside[j])
		{
			printf("%c", n[i]);
			printf("%d", j);
			printf("%c", lowerside[j]);
			n[i] = lowerside[j];
			printf("%c ", n[i]);

			 /*printf("%c ", n[j]);*/

		}
			/*
			printf("%c", upperside[i]);
			printf("%c", lowerside[i]);
			*/
			/*printf("%c ", n[j]);*/
			
		}
		
	}
return (n);
}
