#include <iostream>
#include <string>

using namespace std;

int main() {

	struct CandyBar {
		string brand;
		double mass;
		int caloroes;
	};

	CandyBar snacks[3]{
		{"M&M", 20.0, 400},
		{"Sneakers", 40.5, 700},
		{"Nec", 3.14, 200}
	};

	for (int i = 0; i < 3; i++) {
		cout << snacks[i].brand << endl;
		cout << snacks[i].mass << endl;
		cout << snacks[i].caloroes << endl;
	}

	return 0;
}