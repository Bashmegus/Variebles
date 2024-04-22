#include <iostream>
using namespace std;

int main() {
    double money;
    int grn, cop;
    cout << "Enter money: ";
    cin >> money;
    grn = money;
    cop = (money - grn) * 100;
    cout << grn << " grivnas, " << cop << " copiyok, " << endl;
    system("Pause");
    return 0;
}