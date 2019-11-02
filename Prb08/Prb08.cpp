#include <iostream>
#include <string>

using namespace std;

int main() {

	struct Pizza {
		string company;
		double diameter;
		double mass;
	};

	Pizza* pt = new Pizza;

	cout << "Enter the diameter of the pizza: ";
	cin >> (*pt).diameter;
	cout << "Enter the company' name of the pizza: ";
	cin >> (*pt).company;
	cout << "Enter the mass of the pizza: ";
	cin >> (*pt).mass;

	cout << "The pizza made by " << (*pt).company << " is with diameter of " << (*pt).diameter << " and mass of " << (*pt).mass;

	delete pt;

	return 0;
}
