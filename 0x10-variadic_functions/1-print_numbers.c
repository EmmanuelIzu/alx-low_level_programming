#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers with comma
 * @separator: string argument
 * @n: the length of inputs
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
		return;

	if (separator != NULL)
	{
		va_start(args, n);

		for (i = 0; i < n; ++i)
		{
			if (i < (n - 1))
				printf("%d%s", va_arg(args, int), separator);
			else
				printf("%d\n", va_arg(args, int));

		}
		va_end(args);


	}
}
