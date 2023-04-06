
int checkprime(int n, int m, int j);

int is_prime_number(int n)
{
	int check = (checkprime(n, 2, 0));
	int hold;

	if (check > 0)
	{
	hold = 0;
	}

	else if (check == 0)
	{
	hold = 1;
	}
	return (hold);
}


int checkprime(int n, int m, int j)
{
	int check = n % m;
	
	if(check == 0)
	{
	j = j + 1;
}

	if (m == n){
	return (j);
	}

	return (checkprime(n, (m + 1), j));

}
