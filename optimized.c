#include <stdio.h>

long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{ 
    int result = factorial(1000);

    printf("Result: %d", result);

    return 0;
}