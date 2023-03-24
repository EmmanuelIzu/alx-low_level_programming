#include <stdio.h>
/* print_something - function to print something
*
* Return: Always 0
**/
int print_something(int num);
void print_shape(int num1, int num2);


int main(void){
	 print_shape(4, 3);

return (0);
}




int print_something(int num)
{
    int i, j;
    for (i = 0; i < num + 1; i++)
    {
        for (j = 0; j < num + 1; j++)
        {
            printf("%d", i * j);
            if (j < num)
            {
                printf(", ");
            }
        }
        printf("\n");
    }
    return (0);
   }


void print_shape(int num1, int num2)
{
    int idx1, idx2;
    for (idx1 = 0; idx1 < num1; idx1++)
    {
        for (idx2 = 0; idx2 < num2; idx2++)
        {
            printf("#");
        }
        printf("\n");
    }
}

