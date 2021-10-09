#include <vector>
#include <string>
using namespace std;
vector<string> qsv;
int partition(vector <string> v, int l, int r){
    qsv = v;
    string p = qsv[(l+r)/2];
    int i = l;
    int j = r;
    while (i <= j){
        while(qsv[i] < p){
            i++;
        }
        while (qsv[j] > p){
            j--;
        }
        if (i >= j){
            break;
        }
        swap(qsv[i++], qsv[j--]);
    }
    v=qsv;
    return j;
}

void quicksort_inner(vector <string> v, int l, int r){
    qsv = v;
    int n = v.size();
    if (l < r){
        int q = partition(qsv, l ,r);
        quicksort_inner(qsv, l, q);
        quicksort_inner(qsv, q+1, r);
    }
}

vector <string> quicksort(vector <string> v){
    quicksort_inner(v,0,v.size()-1);
    return qsv;
}

vector <string> bubblesort(vector<string> v){
    int n = v.size();
    for (int i = 0; i <= n-2; i++){
        for (int j = 0; j <= n-2; j++){
            if (v[j] > v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    return v;
}

vector <string> selectionsort(vector<string> v){
    int n = v.size();
    for (int i = 0; i <= n-2; i++){
        for (int j = i+1; j <= n -1; j++){
            if (v[i] > v[j]){
                swap(v[i], v[j]);
            }
        }
    }
    return v;
}

vector <string> insertsort (vector<string> v){
    int n = v.size();
    for (int i = 1; i <= n-1; i++){
        int j = i-1;
        while ((j >= 0) and (v[j] > v[j+1])){
            swap (v[j], v[j+1]);
            j--;
        }
    }
    return v;
}
//
// Created by Me on 08.10.2021.
//

