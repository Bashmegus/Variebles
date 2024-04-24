#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;
    string resoult = (number % 2 == 0 ? "Number is Parne" : "Number is not Parne");
    cout << resoult << endl;
    system("Pause");
    return 0;
}