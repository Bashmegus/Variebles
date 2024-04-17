#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	char luc = 201; // luc stands for left upper corner
	char ruc = 187; // ruc stands for rught upper corner
	char lbc = 200; // lbc stands for left bottom corner
	char rbc = 188; // rbc stands for right bottom corner
	char hs = 205; // hs stands for horisontal straight
	char vs = 186; // vs stands for vertical straight
	char hsd = 203; // hsd stands for horisontal straight down
	char hsu = 202; // hsu stands for horisontal straight up
	char vsr = 204; // vsr stands for horisontal straight right
	char vsl = 185; // vsr stands for horisontal straight left
	cout << luc << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << ruc << endl;
	cout << vs << "                                  Vremena goda                                      " << vs << endl;
	cout << vsr << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hsd << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hsd << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hsd << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << vsl << endl;
	cout << vs << "       Zima          " << vs << "        Vesna        " << vs << "         Leto        " << vs << "       Osen       " << vs << endl;
	cout << lbc << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hsu << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hsu << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hsu << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << hs << rbc << endl;

	SetConsoleTextAttribute(hConsole, 7);
	system("pause");
	return 0;
}