#include <iostream>
#include "fibfuncs.h"
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n > 92){
        cin >> n;
    }
    cout << fib_cycle(n) << " " << fib_recursion(n) << " " << fib_bine(n) << '\n';
}
