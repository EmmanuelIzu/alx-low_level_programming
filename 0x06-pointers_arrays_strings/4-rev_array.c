#include<stdio.h>

void reverse_array(int *a, int n){
	int hold[13];
	int* ptr;
	int i = 0;
	int j = (n-1);
	ptr = a;

	while ((i < n) && (j >= 0))
	{
	/*printf("%d\n", j);*/
	*(hold + i) = ptr[j];
	/*printf("%d\n", a[j]);*/

	++i;
	--j;
}

	i = 0;
	j = (n-1);
 while ((i < n) && (j >= 0))
        {
        /*printf("%d\n", j);*/
        *(ptr + j) = hold[i];
        printf("%d\n", a[i]);
	printf("%d\n", hold[i]);
        ++i;
        --j;
}

/*printf:("%d\n", a[0]);*/
}
