#include <iostream>
using namespace std;

int main() {
    short a = 1;
    int b = 2;

    b = a;

    cout << "short -> int b : " << b << endl;

    short c = 1;
    int d1 = 2;
    int d2 = 65535;

    c = (short)d1;
    cout << "int -> short c : " << c << endl;

    c = (short)d2;
    cout << "int -> short c : " << c << endl;

    short e = 1;
    float f = 10.3f;

    f = e;
    cout << "short -> float f : " << f << endl;

    short g = 1;
    float h1 = 10.3f;
    float h2 = 65535.2f;

    g = (short)h1;
    cout << "float -> short g : " << g << endl;

    g = (short)h2;
    cout << "float -> short g : " << g << endl;

    char i = 'a';
    int j = 65;
    char k = 'b';
    int l = 'b' + 1;

    i = (char)j;
    cout << "int -> char i : " << i << endl;
    l = k;
    cout << "char -> int l : " << l << endl;

    return 0;
}