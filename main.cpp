#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, time, speed;
    int minutes, seconds, secondsTime;
    cout << "Enter distance and time: ";
    cin >> distance >> time;
    minutes = time;
    seconds = (time - minutes) * 100;
    secondsTime = seconds + minutes * 60;
    speed = distance / secondsTime * 3.6;
    cout << "speed is equal to " << setprecision(4) << speed << " km/h" << endl;
    system("Pause");
    return 0;
}