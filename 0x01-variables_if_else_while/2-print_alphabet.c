#include <stdio.h>
/**
* main - entry point
* "Print alphabets lowercase'
* Return: always 0 on successful execution, non-zero otherwise
*/
int main(void) /* main will be returning result*/
{
int n = 97;

while (n <= 122)

{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
