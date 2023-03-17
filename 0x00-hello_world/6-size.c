#include <stdio.h>
int main(void)
{
printf("Size of Int: %2d byte(s) \n", sizeof(short int));
printf("Size of Long Int: %2d byte(s) \n", sizeof(long int));
printf("Size of Float: %2d byte(s) \n", sizeof(float));
printf("Size of Double: %2d byte(s) \n", sizeof(double));
printf("Size of Long Double: %2d byte(s) \n",
sizeof(long double));
printf("Size of Char: %2d byte(s) \n", sizeof(char));
return (0);
}
