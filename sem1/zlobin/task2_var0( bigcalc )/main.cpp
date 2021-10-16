#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

string binary(int n);

int main()
{
    int a, b;
    printf("Enter the number A, B: ");
    scanf("%d%d", &a, &b);
    cout << "Binary A = " << binary(a) << endl;
    cout << "Binary B = " << binary(b) << endl;
    cout << binary(a) << " + " << binary(b) << " = " << binary(a + b) << endl;
    if(a > b)
    {
        cout << binary(a) << " - " << binary(b) << " = " << binary(a - b) << endl;
    }
    else if(a == b)
    {
        cout << binary(a) << " - " << binary(b) << " = " << 0 << endl;
    }
    else
    {
        cout << binary(a) << " - " << binary(b) << " = " << "-" << binary(b - a) << endl;
    }
    return 0;
}

string binary(int n)
{
    string rez;
    while(n >= 1)
    {
        int mod = n % 2;
        string modstr = to_string(mod);
        rez += modstr;
        n = n / 2;
    }
    reverse(begin(rez), end(rez));
    return rez;
}
