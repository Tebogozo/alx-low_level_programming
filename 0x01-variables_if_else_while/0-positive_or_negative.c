#include <iostream>
#include <cstdlib>
#include <ctime>

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
    return 0;
}

