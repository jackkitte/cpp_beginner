#include <iostream>
using namespace std;

int main() {
    int var = 10;
    var = var + 1;
    cout << var << endl;

    var++;
    cout << var << endl;

    var += 1;
    cout << var << endl;

    var /= 2;
    cout << var << endl;

    var %= 2;
    cout << var << endl;

    var *= 2;
    cout << var << endl;

    return 0;
}