#include <iostream>
using namespace std;

class Father {
    protected:
        string fruit;

    public:
        virtual void buy(string fruit) = 0;

        string getFruit() {
            return fruit;
        }
};

class Son : public Father {
    private:
        string name;

    public:
        Son(string name) {
            this->name = name;
        }

        void buy(string value) {
            this->fruit = value;
        }

        string getName() {
            return name;
        }
};

int main() {
    Son s("Luke");
    s.buy("Fruit");

    cout << "Dad, Dad, I bought a pound " << s.getFruit();

    return 0;
}