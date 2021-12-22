#include <cmath>

unsigned long long fact_cycle(int n)
{
    unsigned long long res = 1;

    for(int i = n; i > 1; --i)
    {
        res *= i;
    }
    return res;
}

unsigned long long fact_recursion(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n * fact_recursion(n-1);
}

unsigned long long fact_stirling(int n)
{
    return sqrt(2*M_PI*n) * pow(n/M_E, n);
}