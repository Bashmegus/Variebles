#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	string resoult = (num1 > num2 ? "Num 1 bigger then num 2" : "Num 2 bigger then num 1");
	if (num1 == num2) { resoult = "Numbers are equal";}
	cout << resoult << endl;
	system("pause");
	return 0;
}