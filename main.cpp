#include <iostream>
using namespace std;

int main() {
    int number, n1, n2, n3, n4, n5, n6;
    cout << "Enter number: ";
    cin >> number;
    if ((100000 <= number && number <= 999999)) {
        n1 = number / 100000;
        n2 = number / 10000 - n1 * 10;
        n3 = number / 1000 - n1 * 100 - n2*10;
        n4 = number / 100 - n1 * 1000 - n2*100 - n3*10;
        n5 = number / 10 - n1 * 10000 - n2*1000 - n3*100 - n4*10;
        n6 = number % 10;
        (n1 + n2 + n3 == n4 + n5 + n6) ? cout << "Lucky number" << endl : cout << "Unlucky number" << endl;
    }
    else {
        cout << "Error, number must be 6 numbers long" << endl;
    }
}