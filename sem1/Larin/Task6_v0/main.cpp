#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <fstream>
#include "sortfuncs.h"
using namespace std;
vector <string> finv;
vector <string> get_items(string fn){
    ifstream file;
    file.open(fn);
    string e;
    vector <string> result;
    while (file){
        file >> e;
        result.push_back(e);
    }
    result.resize(result.size()-1);
    return result;
}

void start_sort(string sm, vector <string> v){
    if (sm == "-q"){
        finv = quicksort(v);
    }
    else{
        if (sm == "-b"){
            finv = bubblesort(v);
        }
        else{
            if (sm == "-i"){
                finv = insertsort(v);
            }
            else{
                finv = selectionsort(v);
            }
        }
    }
}

int main(int argc, char* argv[]) {
    string filename = argv[2];
    string sorting_method = argv[1];
    if ((sorting_method!="-s") && (sorting_method!="-b") && (sorting_method!="-i") && (sorting_method!="-q")){
        sorting_method = "-q";
        if (filename == ""){
            filename = argv[1];
        }
    }
    vector <string> thev = get_items(filename);
    start_sort(sorting_method, thev);
    for (int i = 0; i < finv.size(); i++){
        cout << finv[i] << ' ';
    }
}