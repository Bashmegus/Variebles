#include <iostream>
using namespace std;

int main() {
	double scale, distancecm, distancekm;
	cout << "Enter map scale(km): ";
	cin >> scale;
	cout << "Enter distance(cm): ";
	cin >> distancecm;
	distancekm = distancecm * scale;
	cout << "Total distance between cities is equal to " << distancekm << endl;
	system("pause");
	return 0;
}