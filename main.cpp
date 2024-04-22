#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double Radius, V;
    cout << "Enter radius of sphere: ";
    cin >> Radius;
    V = (4.0 / 3.0) * M_PI * Radius*Radius*Radius;
    cout << "Volume of the sphere: " << V << endl;
    system("Pause");
    return 0;
}