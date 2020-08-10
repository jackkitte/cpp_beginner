#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;

        void say() {
            cout << "My name is " << name << ", this year " << age << " years old" << endl;
        }
};

int main() {
    Person p;
    p.name = "Joseph";
    p.age = 22;
    p.say();

    Person p2;
    p2.name = "David";
    p2.age = 23;
    p2.say();

    return 0;
}