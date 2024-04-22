#include <iostream>
using namespace std;

int main() {
    int time, seconds, minutes, hours;
    cout << "Enter time(in seconds): ";
    cin >> time;
    hours = time / 3600;
    minutes = time / 60 - hours * 60;
    seconds = time % 60;
    cout << hours << " Hours, " << minutes << " Minutes, " << seconds << " Seconds" << endl;
    system("Pause");
    return 0;
}