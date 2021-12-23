#include <iostream>
#include <cmath>
using namespace std;

bool checkInput(string s)
{
    for(char i : s)
    {
        if(!isdigit(i) && i != 'e' && i != '-') return false;
    }
    return true;

}

bool triangle(float a, float b, float c)
{
    if(
            powf(a, 2) + powf(b, 2) == powf(c, 2) ||
            powf(b, 2) + powf(c, 2) == powf(a, 2) ||
            powf(a, 2) + powf(c, 2) == powf(b, 2)
    ) return true;
    return false;
}

int main()
{
    string sA, sB, sC;

    cin >> sA >> sB >> sC;

    while(!checkInput(sA) || !checkInput(sB) || !checkInput(sC))
    {
        cout << "Input correct value..." << endl;
        cin >> sA >> sB >> sC;
    }

    float a = stof(sA), b = stof(sB), c = stof(sC);

    if ((a >= pow(10,153)) || (b >= pow(10,153)) || (c >= pow(10,153))){
        cout << "One or several numbers are too big";
        return 1;
    }
    else
    if ((abs(a) <= pow(10,-153) && (a!=0)) || (abs(b) <= pow(10,-153) && (b!=0)) || (abs(c) <= pow(10,-153) && (c!=0))){
        cout << "One or several numbers are too small";
        return 1;
    }

    cout << "Input may " << (triangle(a, b, c) ? "" : "not ") << "be sides of right-angled triangle";

    return 0;
}