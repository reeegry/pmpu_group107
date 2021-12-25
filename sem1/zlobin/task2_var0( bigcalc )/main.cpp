#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

void binary(unsigned long long n, int len);
int length_binary(unsigned long long n);

int main()
{
    unsigned long long a, b;
    printf("Enter the number A, B: ");
    cin >> a >> b;
    cout << "Binary A = " << " ";
    binary(a, length_binary(a));
    cout << endl;
    cout << "Binary B = " << " ";
    binary(b, length_binary(b));
    cout << endl;
    binary(a, length_binary(a));
    cout << " + ";
    binary(b, length_binary(b));
    cout << " = ";
    binary(a+b, length_binary(a+b));
    cout << endl;


    if (a > b)
    {
        binary(a, length_binary(a));
        cout <<  " - ";
        binary(b, length_binary(b));
        cout << " = ";
        binary(a-b, length_binary(a-b));
    }
    else if(a==b)
    {
        cout << "0";
    }
    else
    {
        binary(b, length_binary(b));
        cout << " - ";
        binary(a, length_binary(a));
        cout << " = - ";
        binary(b-a, length_binary(b-a));
    }
    return 0;
}

void binary(unsigned long long n, int len)
{
    vector<bool> result;
    unsigned long long nCopy = n, count = 0;
    while (nCopy != 0)
    {
        count++;
        nCopy /= 2;
    }
    result.resize(count);
    if (n == 0)
    {
        cout << 0;
    }
    else
    {
        int i = 0;
        while (n != 0)
        {
            i = i + 1;
            result.push_back(n % 2);
            n /= 2;
        }
        reverse(result.begin(), result.end());
        vector<bool> new_result;
        new_result.resize(len);
        for (int i = len - 1; i >= 0; --i)
        {
            new_result.push_back(result[i]);
        }
        reverse(new_result.begin(), new_result.end());
        for(int i = 0; i < len; i++)
            cout << new_result[i];
    }
}
int length_binary(unsigned long long n)
{
    unsigned long long copy_n_2 = n;
    int length = 0;
    while(copy_n_2 >= 1)
    {
        int mod = copy_n_2 % 2;
        copy_n_2 = copy_n_2 / 2;
        length++;
    }
    return length;
}
