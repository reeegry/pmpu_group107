#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main()
{
    long double a,b,c,d,x1,x2;
    setlocale(LC_CTYPE, "rus");
    cout << "Введите a\n";
    cin >> a;
    cout << "Введите b\n";
    cin >> b;
    cout << "Введите c\n";
    cin >> c;
    if ((a >= pow(10,153)) or (b >= pow(10,153)) or (c >= pow(10,153)))
    {
        cout << "Вы ввели слишком большие значения!" << endl;
        while((a >= pow(10,153)) or (b >= pow(10,153)) or (c >= pow(10,153)))
            cin >> a >> b >> c;
        cout << "-----------" << endl;
    }
    if (a == 0 and b != 0) {
            cout << ((-c)/b);
            return 0;
    }
    if(a == 0 and b == 0 and c == 0){
        cout << "Верно для всех чисел" << endl;
        return 0;
    }
    else if (a==0 and b==0){
            cout << "Нет решений" << endl;
            return 0;
    }
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    if (d == 0)
    {
        x1 = -(b / (2 * a));
        cout << "x1 = x2 = " << x1 << "\n";
    }
    if (d < 0)
        cout << "D < 0, Действительных корней уравнения не существует";
}
