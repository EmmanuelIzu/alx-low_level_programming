#include "main.h"

int if_pal(char *s, int m, int length);
int _strlen(char *str);

/**
 * is_palindrome - do palindrome
 * @s: Variable
 * Return: return 1 if ok
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (if_pal(s, 0, _strlen(s)));
}


/**
 * if_pal - palindrome
 * @s: variable
 * @i: variable
 * @len: variable
 * Return: return 1
 */
int if_pal(char *s, int m, int length)
{
	if (length <= m)
		return (1);
	
	if (*(s + m) != *(s + length - 1))
		return (0);

	return (if_pal(s, m + 1, length - 1));
}


/**
 * _strlen - string length
 * @s: variable
 * Return: return length
 */
int _strlen(char *str)
{
        if (*str == '\0')
                return (0);
        return (1 + _strlen(str + 1));
}

