#include <iostream>
using namespace std;

int main() {
    int number, n1, n2, n3, n4;
    cout << "Enter number: ";
    cin >> number;
    if ((1000 <= number && number <= 9999)) {
        n1 = number / 1000;
        n2 = number / 100 - n1 * 10;
        n3 = number / 10 - n1 * 100 - n2*10;
        n4 = number % 10;
        cout << n2 << n1 << n4 << n3 << endl;
    }
    else {
        cout << "Error, number must be 4 numbers long" << endl;
    }
}