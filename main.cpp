#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	double v, t, a, S;
	cout << "Enter V than T than A: ";
	cin >> v >> t >> a;
	S = v * t + (a * (t * t)) / 2;
	cout << "S equal to " << S << endl;
	SetConsoleTextAttribute(hConsole, 7);
	system("pause");
	return 0;
}