#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        Person() {
            cout << "Person is instantiated" << endl;
        }

        void say() {
            cout << "My name is " << name << ", this year " << age << " years old" << endl;
        }

        void setName(string value) {
            name = value;
        }

        void setAge(int value) {
            age = value;
        }

        ~Person() {
            cout << "Person is destroy";
        }
};

int main() {
    Person p;
    p.setName("Joseph");
    p.setAge(22);
    p.say();

    return 0;
}