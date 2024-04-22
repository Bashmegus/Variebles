#include <iostream>
using namespace std;

int main() {
	double length, height, width, V;
	cout << "Enter length: ";
	cin >> length;
	cout << "Enter width: ";
	cin >> width;
	cout << "Enter height: ";
	cin >> height;
	V = length * width * height;
	cout << "Total V of Paralelepiped is equal to " << V << endl;
	system("pause");
	return 0;
}