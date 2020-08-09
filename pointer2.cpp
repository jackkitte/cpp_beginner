#include <iostream>
using namespace std;

int main() {
    int scores[] = {80,90,100};
    int *p;

    p = scores;
    for (int i = 0; i < 3; i++) {
        cout << "p address : scores[" << i << "] = " << p << endl;
        cout << "p value : scores[" << i << "] = " << *p << endl;
        p++;
    }

    return 0;
}