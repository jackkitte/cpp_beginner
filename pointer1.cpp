#include <iostream>
using namespace std;

int main() {
    int age = 30;
    int *ip_age;

    ip_age = &age;

    cout << "ip_age address : " << ip_age << endl;
    cout << "ip_age value : " << *ip_age << endl;

    return 0;
}