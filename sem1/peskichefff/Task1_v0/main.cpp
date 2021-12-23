#include <iostream>
using namespace std;

bool checkInput(string s)
{
    for(char i : s)
    {
        if(!isdigit(i) && i != 'e') return false;
    }
    return true;

}

int main()
{
    string sA, sB;

    cin >> sA >> sB;

    while(!checkInput(sA) || !checkInput(sB) || stoi(sB) == 0)
    {
        cout << "Input correct value..." << endl;
        cin >> sA >> sB;
    }

    unsigned long x1 = stoul(sA), x2 = stoul(sB);

    cout << "x1 + x2 = " << x1 + x2 << endl;
    cout << "x1 - x2 = " << x1 - x2 << endl;
    cout << "x1 * x2 = " << x1 * x2 << endl;
    cout << "x1 / x2 = " << (float)x1 / x2 << endl;

    return 0;
}
