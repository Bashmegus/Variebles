#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	double R1, R2, R3;
	cout << "Enter R1, R2 and R3: ";
	cin >> R1 >> R2 >> R3;

	double R0 = 1/(1/R1 + 1/R2 + 1/R3);

	cout << "R0: " << R0 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	system("pause");
	return 0;
}