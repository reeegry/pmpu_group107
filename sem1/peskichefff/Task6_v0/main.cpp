#include "sortfuncs.h"
#include "itemmanage.h"
#include <iostream>

int main(int argc, char* argv[])
{
    string filename, numType = argv[2], sortType = argv[1];
    if(sortType == "-q" || sortType == "-i" || sortType == "-b" || sortType == "-s") {
        if (numType != "-2") {
            filename = argv[2];
        }
    }
    else
    {
        if(sortType == "-2")
        {
            filename = argv[2];
            numType = "-2";
        }
        else
        {
            filename = argv[1];
        }
        sortType = "-q";
    }

    vector<int> arr = get_items(filename, numType == "-2");
    arr = sort(arr, sortType);

    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
