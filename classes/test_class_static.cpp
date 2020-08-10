#include <iostream>
using namespace std;

class User {
    public:
        static int count;

        User() {}
};

int User::count = 0;

int main() {
    User user1;
    user1.count++;

    User user2;
    user2.count++;

    User user3;
    user3.count++;

    cout << "users count: " << User::count;

    return 0;
}