// Spizdil from Evgeny Jestokanov

#include <iostream>
#include <cmath>

bool func(long double x, long double y, long double z)
{
    return ((fabs(x) > 1.7e154) || (fabs(y) > 1.7e154) || (fabs(z) > 1.7e154) ||
        (x <= 0) || (y <= 0) || (z <= 0) ||
        (fabs(x) < 1.7e-154) ||
        (fabs(y) < 1.7e-154) ||
        (fabs(z) < 1.7e-154));
}


int main()
{

    double x, y, z;
    bool flag = false;
    do
    {
        printf("write correct data \n");
        scanf_s("%lf %lf %lf", &x, &y, &z);
        //printf("%lf %lf %lf\n", x, y, z);
    } while (func(x, y, z));


    long double a[3] = { x,y,z };
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3 - i - 1; j++)
        {
            if (a[j] > a[j + 1]) {
                long double tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

    long double ep;
    ep = (a[0] * a[0] + a[1] * a[1]);
    if ((ep - (a[2] * a[2])) > 0)
    {
        ep = ep - (a[2] * a[2]);
    }
    else
    {
        ep = (a[2] * a[2]) - ep;
    }
    if ((ep / (a[2] * a[2])) < (10e-16))
    {
        printf("probably true");
    }
    else
    {
        printf("false");
    }
}
