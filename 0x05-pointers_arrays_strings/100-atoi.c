#include<ctype.h>
#include<string.h>

/**
 * _atoi - the function
 * @s: the pointer variable
 * Return: the return value
 */

int _atoi(char *s)
{
	
        int i;
        int length = strlen(s);
	char ct[20];

        for (i = 0; i < length; i++){
        if (isdigit(s[i]))
        {
                strcat(ct, &s[i], 1);
        }
        }
	_printf("%s",ct);

}

