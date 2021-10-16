#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, res;
    printf("Enter number a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    if((pow(b, 2) - 4*a*c) > 0)
    {
        res = ((-1*b) + sqrt(b*b - 4*a*c)) / (2 * a);
        printf("%s%.2f", "First solution: ", res);

        res = ((-1*b) - sqrt(b*b - 4*a*c)) / (2 * a);
        printf("%s%.2f", "\nSolution solution: ", res);
    }
    else if((pow(b, 2) - 4*a*c) == 0)
    {
        res = (-1*b + sqrt(b*b - 4*a*c)) / (2 * a);
        printf("%s%.2f", "Only solution: ", res);
    }
    else
    {
        cout << "No solutions..." << endl;
    }
    return 0;
}
