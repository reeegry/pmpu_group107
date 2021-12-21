#include <iostream>
#include "functions.h"
using namespace std;

bool checkInput(string s)
{
    for(char i : s)
    {
        if(!isdigit(i)) return false;
    }
    return true;

}

int main()
{
    string n;
    cin >> n;
    while(!checkInput(n) || stoi(n) > 20 || stoi(n)< 0)
    {
        cout << "Input correct value..." << endl;
        cin >> n;
    }

    cout << "Cycle: " << fact_cycle(stoi(n)) << endl << "Recursion: " << fact_recursion(stoi(n)) << endl << "Stirling: " << fact_stirling(stoi(n)) << endl;
    return 0;
}