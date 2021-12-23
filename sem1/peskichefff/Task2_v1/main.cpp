#include <iostream>
using namespace std;

bool checkInput(string s)
{
    for(char i : s)
    {
        if(!isdigit(i)) return false;
    }
    return true;

}

void printMas(unsigned int num)
{
    unsigned int x, i, k;
    cout << "{";

    for(x = 1, i = 1, k = 0; i <= 32; i++, x = x * 2)
    {
        if((x & num) != 0)
        {
            k++;
            if (k != 1) cout << ", ";
            cout << i;
        }
    }

    cout << "}";
}

int main()
{
    string sA, sB;

    cin >> sA >> sB;

    while(!checkInput(sA) || !checkInput(sB))
    {
        cout << "Input correct value..." << endl;
        cin >> sA >> sB;
    }
    unsigned int a = stoi(sA);
    unsigned int b = stoi(sB);

    printMas(a); //A
    cout << endl;

    printMas(b); //B
    cout << endl;

    printMas(a & b); // A & B
    cout << endl;

    printMas(a | b); // A & B
    cout << endl;

    printMas(a & (~b)); // A - B
    cout << endl;

    printMas(a ^ b); // A xor B
    cout << endl;
}

