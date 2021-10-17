#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    /*
    scanf("%s", name.c_str());
    printf("%s%s", "hello, ", name.c_str());
    */
    //printf, scanf работают только через метод c_str
    cin >> name;
    cout << "Hello, " << name;
    return 0;
}
