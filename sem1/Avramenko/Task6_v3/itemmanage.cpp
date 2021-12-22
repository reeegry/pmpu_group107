#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<string> get_items(const string& name)
{
    ifstream file;
    file.open(name);
    string e;
    vector<string> result;
    while (file >> e)
    {
        result.push_back(e);
    }
    return result;
}