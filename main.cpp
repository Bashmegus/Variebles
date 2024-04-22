#include <iostream>
using namespace std;

int main() {
	int grn, cop, calc;
	cout << "Enter amount of grn then input amount of copiyok (format: 10 20): ";
	cin >> grn >> cop;
	calc = cop / 100;
	grn += calc;
	cop %= 100;
	cout << "Corrected amount of grn and cop is: " << grn << " grn, " << cop << " cop!" << endl;
	system("pause");
	return 0;
}