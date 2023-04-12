/**
 * count - counts number of words
 * @s: input string
 *
 * Return: number of words in a string.
 */
int count(char *s)
{
	int pos = 0, i = 0, j = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			pos = 0;
		else if (pos == 0)
		{
			pos = 1;
			j++;
		}
		i++;
	}
	return (j);
}

