#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "U lukomor'a dub zelenij,\nZlataya zep na dupe tom,\nI dnem i nochju kot uchenij\nvse hodit po cepi krugom" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	system("pause");
	return 0;
}