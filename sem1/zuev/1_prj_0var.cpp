#include <iostream>
using namespace std;

int main() 
{
    int x1, x2;
    scanf_s("%d %d", &x1, &x2);
    printf("%d %d %d %.15lf", x1 + x2, x1 - x2, x1 * x2, (double)x1 / x2);
    return 0;
}