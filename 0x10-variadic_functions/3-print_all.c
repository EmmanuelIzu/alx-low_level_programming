#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints any input
 * @format: the list of inputs
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s = "", *str;
	va_list args;

	if (format != NULL)
	{
		va_start(args, format);

	while (format[i])
	{
	switch (format[i])
	{
		case 'c':
			printf("%s%c", s, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", s, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", s, va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char*);

			if (str == NULL)
				str = "(nil)";

			printf("%s%s", s, str);
			break;
		default:
			i++;
			continue;
	}
	++i;
	s = ", ";

	}
	printf("\n");
	}

}
