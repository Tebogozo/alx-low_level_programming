#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - entry point
*
* Return: 0 if false.  positive, negative or zero
*/
int main(void)
{
int n;

srand(time(0));
n = rand() % 201 - 100;

if (n > 0)
{
printf("%d is positive", n);
}
else if (n == 0)
{
printf("%d is zero", n);
}
else
{
printf("%d is negative", n);
}

printf("\n");
return (0);
}
