#include <vector>
#include <iostream>
using namespace std;

#ifndef PROGA_SORTFUNCS_H
#define PROGA_SORTFUNCS_H

vector<int> sort(vector<int>& arr, const string& sortType);
vector<int> bubbleSort(vector<int>& arr);
vector<int> insertSort(vector<int>& arr);
vector<int> selectSort(vector<int>& arr);
vector<int> quickSort(vector<int>& arr);

#endif //PROGA_SORTFUNCS_H
