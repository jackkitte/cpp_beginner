#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    cout << "c % b = " << c % b << endl;

    int d = 4;
    cout << "d++ = " << d++ << endl;

    d = 4;
    cout << "++d = " << ++d << endl;

    d = 4;
    cout << "d-- = " << d-- << endl;

    d = 4;
    cout << "--d = " << --d << endl;

    return 0;
}