#include <iostream>
#include <string>
using namespace std;

class LoyaltyCard {
private:
    string customerName;
    int stamps;

public:
    // Requirement 17: Constructor
    LoyaltyCard(string name) {
        customerName = name;
        stamps = 0; // Initializes stamps to 0
    }

    // Requirement 18: Getter
    int getStamps() {
        return stamps;
    }

    // Requirement 19: addStamp Setter with trigger logic
    void addStamp() {
        stamps++;
        if (stamps == 10) {
            cout << "Congratulations " << customerName << "! You earned a free coffee!" << endl;
            stamps = 0; // Automatically reset stamps to 0
        }
    }
};

int main() {
    // Example Usage
    LoyaltyCard card("Sara");
    for (int i = 0; i < 10; i++) {
        card.addStamp();
    }
    cout << "Current Stamps: " << card.getStamps() << endl;

    return 0;
}