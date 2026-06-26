#include <iostream>
using namespace std;

int main() {
    string login, password;
    cin >> login >> password;

    if(login == "admin" && password == "admin123")
        cout << "Access Granted";
    else
        cout << "Access Denied";

    return 0;
}
