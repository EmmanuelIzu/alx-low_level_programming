/**
 * print_name - calls a function using a pointer
 * @name: string variable
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);

}
