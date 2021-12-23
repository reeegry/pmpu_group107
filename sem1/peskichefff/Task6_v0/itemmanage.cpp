#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

bool checkInput(const string& s)
{
    for(char i : s)
    {
        if(!isdigit(i) && i != 'e' && i != '-') return false;
    }
    return true;
}

vector<int> get_items(const string& fn, bool bin)
{
    ifstream file;
    file.open(fn);
    string e;
    vector<int> result;
    while (file >> e)
    {
        if(!checkInput(e))
        {
            throw invalid_argument("Text file values must be integers only (represented as bin or decimal)");
        }
        result.push_back(bin ? stoi(e, nullptr, 2) : stoi(e));
    }
    return result;
}