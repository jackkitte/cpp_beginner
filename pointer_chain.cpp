#include <iostream>
using namespace std;

int main() {
    int age;
    int *p;
    int **pp;

    age = 30;
    p = &age;
    pp = &p;

    cout << "age = " << age << endl;
    cout << "Value at *p = " << *p << endl;
    cout << "Value at **pp = " << **pp << endl;

    return 0;
}