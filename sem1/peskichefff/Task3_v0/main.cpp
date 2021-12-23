#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool checkInput(string s)
{
    for(char i : s)
    {
        if(!isdigit(i) && i != 'e' && i != '-') return false;
    }
    return true;

}

void bubbleSort(vector<long double>& arr)
{
    bool flag = true;
    while(flag)
    {
        flag = false;
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                arr[i] -= arr[i+1];
                arr[i+1] += arr[i];
                arr[i] = arr[i+1] - arr[i];
                flag = true;
            }
        }
    }
}

bool checkValue(long double x, long double y, long double z)
{
    return ((fabs(x) > 1.7e154) || (fabs(y) > 1.7e154) || (fabs(z) > 1.7e154) ||
            (x <= 0) || (y <= 0) || (z <= 0) ||
            (fabs(x) < 1.7e-154) ||
            (fabs(y) < 1.7e-154) ||
            (fabs(z) < 1.7e-154));
}

int main()
{
    string sA, sB, sC;

    cin >> sA >> sB >> sC;

    while(!checkInput(sA) || !checkInput(sB) || !checkInput(sC) || checkValue(stold(sA), stold(sB), stold(sC)))
    {
        cout << "Input correct value..." << endl;
        cin >> sA >> sB >> sC;
    }

    vector<long double> arr = { stold(sA), stold(sB), stold(sC) };
    bubbleSort(arr);

    if ((arr[0] >= pow(10,153)) || (arr[1] >= pow(10,153)) || (arr[2] >= pow(10,153))){
        cout << "One or several numbers are too big";
        return 1;
    }
    else
    if ((abs(arr[0]) <= pow(10,-153) && (arr[0]!=0)) || (abs(arr[1]) <= pow(10,-153) && (arr[1]!=0)) || (abs(arr[2]) <= pow(10,-153) && (arr[2]!=0))){
        cout << "One or several numbers are too small";
        return 1;
    }

    long double exp = abs(arr[0]*arr[0] + arr[1]*arr[1] - arr[2]*arr[2]);

    cout << "Input may " << ((exp / (arr[0] * arr[0])) < (10e-16) ? "" : "not ") << "be sides of right-angled triangle";

    return 0;
}