#include <iostream>
using namespace std;

class UserProfile {
private:
    string username;
    string password;

public:
    // Constructor
    UserProfile(string user, string pass) {
        username = user;
        password = pass;
    }

    // Getter only for username
    string getUsername() {
        return username;
    }

    // Update password function
    void updatePassword(string oldPassword, string newPassword) {
        if (oldPassword == password) {
            password = newPassword;
            cout << "Password updated." << endl;
        }
        else {
            cout << "Access Denied: Incorrect current password." << endl;
        }
    }
};

int main() {
    UserProfile user("ali_dev", "qwerty123");

    user.updatePassword("wrongpass", "newSecurePass!");
    user.updatePassword("qwerty123", "newSecurePass!");

    return 0;
}