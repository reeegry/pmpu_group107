#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a,b,c;
    cin >> a >> b >> c;
    if ((a >= pow(10,153)) or (b >= pow(10,153)) or (c >= pow(10,153))){
        cout << "One or several numbers are too big";
    }
    else
    if ((abs(a) <= pow(10,-153) and (a!=0)) or (abs(b) <= pow(10,-153)and (b!=0)) or (abs(c) <= pow(10,-153)and (c!=0))){
        cout << "One or several numbers are too small";
    }
    else if (a!=0) {
        cout << ((-b + sqrt(b * b - 4 * a * c)) / (2 * a)) << '\n' << ((-b - sqrt(b * b - 4 * a * c)) / (2 * a));
    }
    else{
        if ((b == 0) and (c==0)){
            cout << "Any number";
        }
        else{
            if (b == 0){
                cout << "False";
            }
            else cout << -c/b;
        }
    }
    return 0;
}