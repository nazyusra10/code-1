#include <iostream>
#include <string>
using namespace std;

class GameCharacter {
private:
    string name;
    int health;
    int maxHealth;

public:
    // Requirement 13: Constructor
    GameCharacter(string n, int maxH) {
        name = n;
        maxHealth = maxH;
        health = maxHealth; // Initializes current health equal to maxHealth
    }

    // Requirement 14: Getters
    string getName() { return name; }
    int getHealth() { return health; }

    // Requirement 15: takeDamage Setter
    void takeDamage(int damage) {
        health -= damage;
        if (health <= 0) {
            health = 0; // Clamp to 0
            cout << "Character has fainted." << endl;
        }
    }

    // Requirement 16: heal Setter
    void heal(int amount) {
        health += amount;
        if (health > maxHealth) {
            health = maxHealth; // Clamp to maxHealth
        }
    }
};

int main() {
    // Example Usage
    GameCharacter hero("Arthur", 100);
    hero.takeDamage(120);
    hero.heal(50);
    hero.heal(200);
    cout << "Final Health: " << hero.getHealth() << endl;

    return 0;
}