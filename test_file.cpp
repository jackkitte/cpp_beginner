#include <fstream>
#include <iostream>
using namespace std;

int main() {
    char data[100];

    ofstream outfile;
    outfile.open("./test.text");

    outfile << "Whatever is worth doing is worth doing well." << endl;
    outfile << "The sun comes right back up the next day." << endl;

    outfile.close();

    return 0;
}