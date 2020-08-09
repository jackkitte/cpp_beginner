#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char str1[50] = "nice day";
    char str2[50];
    int length;

    strcpy(str2, str1);
    cout << "str1 : " << str1 << endl;
    cout << "str2 : " << str2 << endl;

    length = strlen(str1);
    cout << "strlen str1 : " << length << endl;

    string str3 = "Happy";
    string str4 = "Life";
    string str5;

    str5 = str3;
    cout << "str5 : " << str5 << endl;

    str5 = str3 + str4;
    cout << "str3 + str4 : " << str5 << endl;

    int length2 = str5.size();
    cout << "str5.size() : " << length2 << endl;

    return 0;
}