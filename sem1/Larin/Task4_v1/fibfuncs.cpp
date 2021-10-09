#include <cmath>
using namespace std;
long long int fib_cycle(long long int n){
    if (n == 0){
        return 0;
    }
    if ((n == 1) or (n==2)){
        return 1;
    }
    long long int a = 1, b = 1;
    for (int i = 3; i<=n; i++){
        if (i == n){
            return (a+b);
        }
        long long int m = a+b;
        a = b;
        b = m;
    }
    return 0;
}
long long int fib_recursion(long long int n, long long int cn, long long int a, long long int b){
    if (n == 0){
        return 0;
    }
    if ((n == 1) or (n==2)){
        return 1;
    }
    if (n == cn){
        return(a+b);
    }
    long long int m = a+b;
    return fib_recursion(n,cn+1,b,m);
}
long long int fib_bine(long long int n){
    return (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n))/sqrt(5);
}
