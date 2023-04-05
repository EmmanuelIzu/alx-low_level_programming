/**
 * _pow_recursion - Main program
 * @x: variable
 * @y: variable
 * Return: return value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

return (x * (_pow_recursion(x, y - 1)));
}
