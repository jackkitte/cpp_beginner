#include <iostream>
using namespace std;

class Person {
    public:
        virtual void say() {
            cout << "Person speaking" << endl;
        }
};

class ChineseStudent : public Person {
    public:
        virtual void say() {
            cout << "Speak Chinese" << endl;
        }
};

class AmericaStudent : public Person {
    public:
        virtual void say() {
            cout << "Speak English" << endl;
        }
};

int main() {
    ChineseStudent s;
    s.say();

    AmericaStudent as;
    as.say();

    return 0;
}