#include <iostream>
#include <cmath>

using namespace std;

bool triangle(float a, float b, float c);

int main()
{
    float a, b, c;
    printf("Enter numbers a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    if(triangle(a, b, c) == true)
        printf("Answer: YES\n");
    else
        printf("Answer: no\n");
    return 0;
}

bool triangle(float a, float b, float c)
{
    printf("\nAre a, b, c the sides of triangle with ninety degrees angle?\n");
    if(pow(c, 2) == pow(a, 2) + pow(b, 2))
    {
        return true;
    }
    else if(pow(b, 2) == pow(a, 2) + pow(c, 2))
    {
        return true;
    }
    else if(pow(a, 2) == pow(c, 2) + pow(b, 2))
    {
        return true;
    }
}
