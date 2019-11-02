#include <iostream>
#include <string>

using namespace std;

int main() {
	
	struct CandyBar {
		string brand;
		double mass;
		int caloroes;
	};

	CandyBar* pt = new CandyBar[3];

	pt[0] = { "M&M", 20.0, 400 };
	pt[1] = {"Sneakers", 40.5, 700};
	pt[2] = { "Nec", 3.14, 200 };

	cout << pt << endl;
	cout << &pt[1] << endl;
	cout << sizeof(pt[0]) << endl;

	delete[] pt;

	return 0;
}