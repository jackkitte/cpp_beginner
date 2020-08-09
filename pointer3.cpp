#include <iostream>
using namespace std;

void increment(int age);
void increment_by_p(int *p);

int main() {
    int age = 25;

    increment(age);
    cout << "age : " << age << endl;

    increment_by_p(&age);
    cout << "age : " << age << endl;

    return 0;
}

void increment(int age) {
    age = age + 1;

    return;
}

void increment_by_p(int *p) {
    *p = *p + 1;

    return;
}
