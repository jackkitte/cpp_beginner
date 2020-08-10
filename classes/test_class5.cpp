#include <iostream>
using namespace std;

class Calculator {
    public:
        double add(double a, double b) {
            return a + b;
        }

        int add(int a, int b) {
            return a + b;
        }
};

int main() {
    Calculator c;
    int result = c.add(10,20);
    cout << result << endl;

    double result2 = c.add(30.5, 40.2);
    cout << result2;

    return 0;
}