#include <vector>
#include <iostream>
using namespace std;

vector<string> bubbleSort(vector<string>& arr)
{
    bool flag = true;
    while(flag)
    {
        flag = false;
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                flag = true;
            }
        }
    }

    return arr;
}

vector<string> insertSort(vector<string>& arr)
{
    int j;
    string key;

    for(int i = 1; i < arr.size(); i++)
    {
        key = arr[i];
        j = i;
        while(j > 0 && arr[j-1] > key)
        {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;
    }

    return arr;
}

vector<string> quickSort(vector<string>& arr)
{
    if(arr.size() <= 1)
    {
        return arr;
    }
    unsigned long long pivotIndex = arr.size() / 2;
    string pivot = arr[pivotIndex];
    vector<string> less, greater;

    for(int i = 0; i < arr.size(); i++)
    {
        if(i == pivotIndex) continue;
        if(arr[i] < pivot)
        {
            less.push_back(arr[i]);
        }
        else
        {
            greater.push_back(arr[i]);
        }
    }

    vector<string> result;
    for(const string& i : quickSort(less))
    {
        result.push_back(i);
    }
    result.push_back(pivot);
    for(const string& i : quickSort(greater))
    {
        result.push_back(i);
    }
    return result;
}

vector<string> selectSort(vector<string>& arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        int indexMin = i;
        for(int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[indexMin])
            {
                indexMin = j;
            }
        }
        swap(arr[i], arr[indexMin]);
    }

    return arr;
}

vector<string> sort(vector<string>& arr, const string& type)
{
    if(type == "-q") return quickSort(arr);
    if(type == "-i") return insertSort(arr);
    if(type == "-b") return bubbleSort(arr);
    return selectSort(arr);
}