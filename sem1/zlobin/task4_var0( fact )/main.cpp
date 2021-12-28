#include <iostream>
#include "factorial.h"
#include <iomanip>
#include <cmath>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    long double n;
    cin >> n;
    while (n < 0 || n > 1752)
        cin >> n;
    cout << "Cycle factorial: " << setprecision(15) << cycle(n) << endl;
    cout << "Recursion factorial: " << recursion(n) << endl;
    cout << "Stirling formulas: " << stirling(n) << endl;
    return 0;
}
