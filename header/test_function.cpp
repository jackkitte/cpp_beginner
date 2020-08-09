#include <iostream>
#include <string>
#include "myfunction.h"
using namespace std;

int main() {
    double a = 30;
    double b = 20;
    double result = 0;

    result = add(a, b);
    cout << "add(a + b) : " << result << endl;

    result = sub(a, b);
    cout << "add(a - b) : " << result << endl;

    return 0;
}