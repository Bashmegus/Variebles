#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	float pi = 3.14;
	double R;
	cout << "Enter Circle Radius: ";
	cin >> R;
	double L = 2 * pi * R;
	cout << "L is " << L << endl;
	SetConsoleTextAttribute(hConsole, 7);
	system("pause");
	return 0;
}