#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<int> get_items(const string& fn, bool bin)
{
    ifstream file;
    file.open(fn);
    int e;
    vector<int> result;
    if(bin)
    {
        while (file >> e)
        {
            result.push_back(stoi(to_string(e), nullptr, 2));
        }
    }
    else
    {
        while (file >> e)
        {
            result.push_back(e);
        }
    }
    return result;
}