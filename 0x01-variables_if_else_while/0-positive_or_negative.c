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
int randomNumber;

srand(time(0));
randomNumber = rand() % 3;

switch (randomNumber)
{
 case 0:
n = -98;
break;
case 1:
n = 98;
break;
case 2:
n = 0;
break;
default:
printf("Error: Invalid random number generated.\n");
return 1;
}

if (n > 0)

{
printf("%d is positive", n);
}

else if (n < 0)

{
printf("%d is negative", n);
}

else

{
printf("%d is zero", n);
}

printf("\n");

return (0);
}
