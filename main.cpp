#include <iostream>
using namespace std;

int calculateFuelConsumption(double weight) {
    if (weight <= 500) {
        return 1;
    }
    else if (weight <= 1000) {
        return 4;
    }
    else if (weight <= 1500) {
        return 7;
    }
    else if (weight <= 2000) {
        return 9;
    }
    else {
        return -1;
    }
}

int main() {
    double distanceAb, distanceBc, cargoWeight;
    double fuelTankSize = 300;

    cout << "Distance between points A and B: ";
    cin >> distanceAb;
    cout << "Distance between points B and C: ";
    cin >> distanceBc;
    cout << "Weight of the cargo: ";
    cin >> cargoWeight;

    double fuelConsumption = calculateFuelConsumption(cargoWeight);
    if (fuelConsumption == -1) {
        cout << "Too heavy cargo" << endl;
        return 0;
    }
    double abFuelRequired = distanceAb * fuelConsumption;
    double totalFuelRequired = (distanceAb + distanceBc) * fuelConsumption;
    if (abFuelRequired > fuelTankSize) {
        cout << "Impossible to fly from point A to point B" << abFuelRequired << endl;
        return 0;
    }
    double refuelRequired = totalFuelRequired - fuelTankSize;
    if (refuelRequired > fuelTankSize) {
        cout << "Imposible to fly from point B to point A" << endl;
        return 0;
    }
    if (refuelRequired <= 0) {
        cout << "Doesn't need refueling" << endl;
        return 0;
    }
    cout << "Minimal refualing at point B is " << refuelRequired << endl;
    

    return 0;
}