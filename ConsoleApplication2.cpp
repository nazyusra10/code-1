#include <iostream>
using namespace std;
class ParkingMeter {
private:
    int timeRemaining;
    const int maxTime = 120;
public:
    // Constructor
    ParkingMeter() {
        timeRemaining = 0;
    }
    // Getter
    int getTimeRemaining() {
        return timeRemaining;
    }
    // Function to add time
    void addTime(int minutes) {

        timeRemaining = timeRemaining + minutes;

        if (timeRemaining > maxTime) {
            timeRemaining = maxTime;
            cout << "Max time reached. Excess coins refunded." << endl;
        }
    }
};

int main() {

    ParkingMeter meter;
    meter.addTime(60);
    meter.addTime(90);
    cout << "Time on meter: " << meter.getTimeRemaining() << " mins" << endl;
    return 0;
}