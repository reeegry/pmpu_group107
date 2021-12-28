#include <iostream>
#include <cmath>
#include "cstdio"

//double M_E = 2.72;
//double M_PI = 3.14;

using namespace std;

long double cycle(long double n)
{
    long double rez = 1;
    for(int i = 1; i <= n; i++)
    {
        rez = rez * i;
    }
    return rez;
}

long double recursion(long double n)
{
    if (n==0)
        return 1;
    else
    {
        return n*recursion(n-1);
    }
}

long double stirling(long double n)
{
    return sqrt(2*2*acos(0)*n)*(pow((n/exp(1)), n));
}
