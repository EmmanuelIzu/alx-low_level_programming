#include <ctype.h>
/**
 * _isalpha - the function that checks for alphabetical letters
 * Description: accepts and Input and checks if the input is and alphabet
 * @c: hold the value to be checked
 * Return: outputs 1 if input is an alphabeth and 0 is anything else
 */


int _isalpha(int c)
{

	return (!(isalpha(c)));
}
