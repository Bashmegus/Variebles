#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Enter year: ";
	cin >> x;
	int days = 365 + (x % 4 == 0) - (x % 100 == 0) + (x % 400 == 0);
	cout << "Amount of days in year " << x << " is " << days << endl;
	system("pause");
}