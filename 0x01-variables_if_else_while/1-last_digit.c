#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0
*/
void test_case_1(void);
void test_case_2(void);
void test_case_3(void);

int main(void)
{
test_case_1();
test_case_2();
test_case_3();

return (0);
}

void test_case_1(void)/* tests 98 and returns to case 1*/
{
int n = 98;
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

void test_case_2(void)/*testd -98 to case 2*/
{
int n = -98;
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

void test_case_3(void)/*tests 980 to case 3*/
{
int n = 980;
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
