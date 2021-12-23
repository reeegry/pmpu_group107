#include <iostream>
#include "sort.h"
#include <string>
#include <vector>

using namespace std;

void print_m(vector<string> &a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}

//Bubble method
void sort_b(vector<string> &a, int n) {
    int swap_counter = 1; //uses to detect sorted array earlier
    for (int i = 0; i < n - 1; i++) {
        if (swap_counter == 0) break;
        swap_counter = 0;
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swap_counter++;
            }
        }
    }
}

//Selection method
void sort_s(vector<string> &arr, int n) {
    int mn;
    for (int i = 0; i < n - 1; i++) {
        mn = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[mn]) {
                mn = j;
            }
        }
        swap(arr[i], arr[mn]);
    }
}

//Insertion method
void sort_i(vector<string> &a, int n) {
    int cur;
    string temp;
    for (int i = 1; i < n; i++) {
        cur = i;
        for (int j = i - 1; j > -1; j--) {
            if (a[j] < a[i]) {
                cur = j + 1;
                break;
            }
            cur = j;
        }
        temp = a[i];
        for (int j = i; j > cur; j--) {
            a[j] = a[j - 1];
        }
        a[cur] = temp;
    }
}

//Quick sort method
void sort_q(vector<string> &arr, int l, int r) {
    if (r > l) {
        int R = r;
        int L = l;
        string m = arr[(l + r) / 2];
        while (r >= l) {
            while (arr[l] < m && l <= r) l++;
            while (ar[r] > m && r >= l) r--;
            if (l<=r) {
                swap(a[l], a[r]);
                l++;
                r--;
            }
        }
        sort_q(a, L, r);
        sort_q(a, l, R);
    }
}
