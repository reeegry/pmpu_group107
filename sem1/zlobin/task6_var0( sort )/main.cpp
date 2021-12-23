#include <iostream>
#include <string>
#include "sort.h"
#include <fstream>
#include <vector>

///ПРОЧИТАЙТЕ README.MD!

using namespace std;

int main(int argc, char *argv[]) {
    int num = 2;
    string type_sort, path; // type_sort - sort type_sort, path - file path
    //setting parameters
    switch (num) {
        case 2:
            type_sort = "-q";
            path = argv[1];
            break;
        case 3:
            type_sort = argv[1];
            path = argv[2];
            break;
        default:
            cout << "Wrong parameters";
            exit(0);
    }

    vector<string> arr;
    string temp;

    ifstream fin;
    fin.open(path);
    if (!fin.is_open()) {
        cout << "Cannot open file. Check file path and file extension. File path should be absolute";
    } else {
        while (getline(fin, temp)) {
            if (temp[temp.length() - 1] == '\r') {
                temp.erase(temp.length() - 1);
            }
            arr.push_back(temp);
        }
        int length = arr.size();
        if (type_sort == "-q") {
            sort_q(arr, 0, length - 1);
            cout << "Sorted by quicksort" << endl;
            print_m(arr,length);
        } else if (type_sort == "-s") {
            sort_s(arr, length);
            cout << "Sorted by selection sort" << endl;
            print_m(arr,length);
        } else if (type_sort == "-i") {
            sort_i(arr, length);
            cout << "Sorted by insertion sort" << endl;
            print_m(arr,length);
        } else if (type_sort == "-b") {
            sort_b(arr, length);
            cout << "Sorted by bubble sort" << endl;
            print_m(arr,length);
        }
        else {
            cout << "Wrong sort parameter";
            fin.close();
            exit(0);
        }

    }
    fin.close();
}
