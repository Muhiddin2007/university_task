#include <iostream>
using namespace std;

int main()
{
    float a, b, c, P;
    cout << "Введите стороны a, b, c" << endl;
    cin >> a >> b >> c;
    P = a + b + c;

    cout << "Периметр треугольника: " << P << endl;
    return 0;
}