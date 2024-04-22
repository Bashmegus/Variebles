#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int totaldays, days, weeks;
	cout << "Enter Amount Of Days: ";
	cin >> totaldays;
	weeks = totaldays / 7;
	days = totaldays - weeks * 7;
	cout << "Weeks: " << weeks << ", Days: " << days << endl;
	system("pause");
	return 0;
}