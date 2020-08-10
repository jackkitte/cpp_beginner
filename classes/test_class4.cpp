#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void say() {
            cout << "My name is " << name << ", this year " << age << " years old" << endl;
        }
};

int main() {
    Person p("Joseph", 22);
    p.say();

    return 0;
}