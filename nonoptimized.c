#include <stdio.h>

long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{ 
    int result = factorial(1000);

    printf("Result: %d", result);

    return 0;
}