#include <iostream>
#include <random>
using namespace std;



int main() {

    int passLength;
    cout << "Enter desired password length: ";
    cin >> passLength;

    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string password;

    for (int i = 0; i < passLength; i++) {
        int randomIndex = rand() % characters.length();
        password += characters[randomIndex];
    }
    cout << password << endl;

    return 0;
}