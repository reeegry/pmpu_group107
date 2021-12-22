#include "sortfuncs.h"
#include "itemmanage.h"
#include <iostream>

int main(int argc, char* argv[])
{
    string filename = argv[2], sortType = argv[1];
    if(sortType != "-q" && sortType != "-i" && sortType != "-b" && sortType != "-s") {
        sortType = "q";
        filename = argv[1];
    }

    vector<string> arr = get_items(filename);
    arr = sort(arr, sortType);

    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
