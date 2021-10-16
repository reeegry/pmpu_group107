#include <iostream>
using namespace std;

int main()
{
    int x1, x2;
    scanf("%d %d", &x1, &x2);
    printf("%d %s %d %s %d\n", x1, "+" , x2, "=", x1+x2);
    printf("%d %s %d %s %d\n", x1, "-" , x2, "=", x1-x2);
    printf("%d %s %d %s %d\n", x1, "*" , x2, "=", x1*x2);
    printf("%d %s %d %s %f\n", x1, "/" , x2, "=", (float)x1/x2);
    return 0;
}
