#include <stdio.h>
/**
* main - entry point
*
* Return: 0 if false.  positive, negative or zero
*/
int main(void)
{
srand(time(NULL));
int n = rand() % RAND_MAX;

std::cout << "The number " << n;

if (n > 0)
{
std::cout << " is positive";
}
else if (n == 0)
{
std::cout << " is zero";
}
else
{
std::cout << " is negative";
}

std::cout << std::endl;
return (0);
}
