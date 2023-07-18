#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
int n;
int lastDigit;
/* Test case 1: n = 98 */
n = 98;
lastDigit = n % 10;

printf("Last digit of %d is %d", n, lastDigit);

if (lastDigit > 5)
{
printf("and is greater than 5");
}
else if (lastDigit == 0)
{
printf("and is 0");
}
else
{
printf("and is less than 6 and not 0");
}

printf("\n");

/* Test case 2: n = -98 */
n = -98;
lastDigit = n % 10;

printf("Last digit of %d is %d", n, lastDigit);

if (lastDigit > 5)
{
printf("and is greater than 5");
}
else if (lastDigit == 0)
{
printf("and is 0");
}
else
{
printf("and is less than 6 and not 0");
}

printf("\n");

/* Test case 3: n = 980 */
n = 980;
lastDigit = n % 10;

printf("Last digit of %d is %d", n, lastDigit);

if (lastDigit > 5)
{
printf("and is greater than 5");
}
else if (lastDigit == 0)
{
printf("and is 0");
}
else
{
printf("and is less than 6 and not 0");
}

printf("\n");

return (0);
}
