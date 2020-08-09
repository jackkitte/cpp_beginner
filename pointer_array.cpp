#include <iostream>
using namespace std;

const int MAXSIZE = 3;

int main() {
    int scores[] = {80,90,100};
    int *p[MAXSIZE];

    for (int i = 0; i < MAXSIZE; i++) {
        p[i] = &scores[i];
    }

    for (int i = 0; i < MAXSIZE; i++) {
        cout << "scores[" << i << "] = " << *p[i] << endl;
    }

    return 0;
}