#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string username, password;

    ifstream usernameFile("db/username.txt");
    ifstream passwordFile("db/password.txt");

    if (usernameFile.good() && passwordFile.good()) {

        string verifyPass;

        getline(usernameFile, username);
        getline(passwordFile, password);
        cout << "Welcome, " << username << ", please enter your password" << endl;
        cout << "> ";
        cin >> verifyPass;

        if (verifyPass == password) {
            cout << "Logged in successfully." << endl;
        }
        else {
            cout << "Invalid password" << endl;
        }
    } else {
        cout << "Error: could not open files" << endl;
    }

    return 0;
}
