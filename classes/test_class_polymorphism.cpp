#include <iostream>
#include <string>
using namespace std;

class Person {
    protected:
        string name;

    public:
        Person() {
        }

        Person(string name) {
            this->name = name;
        }

        void say() {
            cout << "Person speaking" << endl;
        }
};

class Student : public Person {
    public:
        Student(string name) {
            this->name = name;
        }

        void say() {
            cout << "Student speak english" << endl;
        }

        void study() {
            cout << "study" << endl;
        }
};

int main() {
    Student p("David");
    p.say();

    Student s = (Student)p;
    s.say();
    s.study();

    return 0;
}