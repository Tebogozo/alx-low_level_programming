#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0
*/
void test_case_1(void);

int main(void)
{
/* Seed the random number generator */
srand(time(0));

test_case_1();

return 0;
}

void test_case_1(void)
{
int numbers[] = {98, -98, 980};

int randomIndex = rand() % 4;
int n = numbers[randomIndex];
int lastDigit = n % 10;

printf("Last digit of %d is %d", n, lastDigit);

if (lastDigit > 5)
{
printf(" and is greater than 5");
}
else if (lastDigit == 0)
{
printf(" and is 0");
}
else
{
printf(" and is less than 6 and not 0");
}

printf("\n");
}
