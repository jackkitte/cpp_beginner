#include <iostream>
using namespace std;

#define LENGTH 10
#define WIDTH 5

int main() {
    cout << "LENGTH : " << LENGTH << endl;
    cout << "WIDTH : " << WIDTH << endl;

    const int UP = 0;
    const int DOWN = 1;
    const int LEFT = 2;
    const int RIGHT = 3;

    cout << "UP : " << UP << endl;
    cout << "DOWN : " << DOWN << endl;
    cout << "LEFT : " << LEFT << endl;
    cout << "RIGHT : " << RIGHT << endl;

    const float PI = 3.14;

    cout << "PI : " << PI << endl;

    const char A = 'A';

    cout << "const char : " << A << endl;

    return 0;
}