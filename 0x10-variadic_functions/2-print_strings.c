#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings with comma
 * @separator: string argument
 * @n: the length of inputs
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;
	/**
	 *
	 * if (n == 0)
	 *	return;
	 */

		va_start(args, n);

		for (i = 0; i < n; ++i)
		{
			string = va_arg(args, char*);

			if (string == NULL)
				string = "nil";

			printf("%s", string);

			if (i < (n - 1) && separator)
				printf("%s", separator);
		}
		printf("\n");
		va_end(args);



}
