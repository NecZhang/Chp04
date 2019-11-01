#include <iostream>
#include <string>

using namespace std;

int main() {

	struct CandyBar {
		string brand;
		double mass;
		int caloroes;
	};

	CandyBar snack{
		"Mocha Munch",
		2.3,
		350
	};

	cout << snack.brand << endl;
	cout << snack.mass << endl;
	cout << snack.caloroes << endl;
}