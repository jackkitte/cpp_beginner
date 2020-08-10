#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;

    public:
        Person() {
            cout << "parent class Person instantiation" << endl;
        }

        Person(string name, int age) {
            cout << "the parent class of Person " << name << "instantiated" << endl;
        }

        void say() {
            cout << "Person can speaking" << endl;
        }
};

class Student : public Person {
    public:
        Student() {
            cout << "Subclass Student Instantiation" << endl;
        }

        Student(string name, int age) {
            cout << "Subclass Student " << name << " instantiated" << endl;
        }
};

int main() {
    Student s;
    s.name = "Sumi";
    s.age = 22;

    Student s2("Isacc", 23);
    s2.say();

    return 0;
}