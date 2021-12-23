#include "sortfuncs.h"
#include "itemmanage.h"
#include <iostream>
#include <bitset>

int main(int argc, char* argv[])
{
    string filename, numType, sortType;
    argc = argc-1;
    if(argc > 3 || argc < 1)
    {
        cout << "Incorrect param value";
        return 1;
    }

    if(argc == 1)
    {
        filename = argv[1];
        sortType = "-q";
    }
    else if(argc == 2)
    {
        filename = argv[2];
        sortType = argv[1];

        if(sortType != "-q" && sortType != "-i" && sortType != "-b" && sortType != "-s")
        {
            if(sortType != "-2")
            {
                cout << "Invalid params";
                return 1;
            }
            sortType = "-q";
            numType = "-2";
        }
    }
    else
    {
        filename = argv[3];
        numType = argv[2];
        sortType = argv[1];
    }

    if(sortType != "-q" && sortType != "-i" && sortType != "-b" && sortType != "-s")
    {
        cout << "Invalid params";
        return 1;
    }

    vector<int> arr = get_items(filename, numType == "-2");
    arr = sort(arr, sortType);

    for(int i : arr)
    {
        if(numType == "-2")
        {
            string binary = std::bitset<32>(i < 0 ? -i : i).to_string();
            binary.erase(0, binary.find_first_not_of(('0')));
            cout << (i < 0 ? "-" : i == 0 ? "0" : "") << binary << " ";
        }
        else cout << i << " ";
    }

    return 0;
}
