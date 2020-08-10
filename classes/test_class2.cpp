#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        void setName(string value) {
            name = value;
        }

        string getName() {
            return name;
        }

        void setAge(int value) {
            age = value;
        }

        int getAge() {
            return age;
        }

        void say() {
            cout << "My name is " << name << ", this year " << age << " years old" << endl;
        }
};

int main() {
    Person p;
    p.setName("Joseph");
    p.setAge(22);
    p.say();
    cout << p.getName() << " " << p.getAge();

    return 0;
}