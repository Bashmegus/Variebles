#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;
    if (number < 0) { cout << "Negative" << endl; }
    else if (number > 0) { cout << "Positive" << endl; }
    else { cout << "Zero" << endl; }
    system("Pause");
    return 0;
}