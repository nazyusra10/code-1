#include <iostream>
#include <string>
using namespace std;
class Thermostat {
private:
    string roomName;
    double temperature;
public:
    // Constructor
    Thermostat(string r, double t) {
        roomName = r;
        if (t >= 16.0 && t <= 30.0)
            temperature = t;
        else
            temperature = 16.0;
    }

    // Getter
    double getTemperature() {
        return temperature;
    }

    // Setter with validation
    void setTemperature(double t) {

        if (t < 16.0 || t > 30.0) {
            cout << "Error: " << t << "C is outside the hardware limits (16.0C - 30.0C)." << endl;
        }
        else {
            temperature = t;
        }
    }
};

int main() {
    Thermostat t("Living Room", 22.5);
    t.setTemperature(35.0);
    t.setTemperature(18.0);
    cout << "Current Temp: " << t.getTemperature() << "C" << endl;

    return 0;
}