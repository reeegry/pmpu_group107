#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

bool triangle(float a, float b, float c);

int main()
{
    setlocale(LC_CTYPE, "rus"); // Локализирует только вывод, ввод на кирилице не работает!!!
    float a, b, c;
    printf("Введите размеры сторон треугольника: ");
    scanf("%d%d%d", &a, &b, &c);
    if(triangle(a, b, c) == true)
        printf("Введёные числа являются сторонами треугольника");
    else
        printf("Введёные числа не являются сторонами треугольника");
    return 0;
}

bool triangle(float a, float b, float c)
{
    if(pow(c, 2) == pow(a, 2) + pow(b, 2))
    {
        return true;
    }
    else if(pow(b, 2) == pow(a, 2) + pow(c, 2))
    {
        return true;
    }
    else if(pow(a, 2) == pow(c, 2) + pow(b, 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}
