#include <iostream>
#include <string>

using namespace std;

int main() {

	struct Pizza {
		string company;
		double diameter;
		double mass;
	}custPizza;

	cout << "Enter the company' name of the pizza: ";
	cin >> custPizza.company;
	cout << "Enter the diameter of the pizza: ";
	cin >> custPizza.diameter;
	cout << "Enter the mass of the pizza: ";
	cin >> custPizza.mass;

	cout << "The pizza made by " << custPizza.company << " is with diameter of " << custPizza.diameter << " and mass of " << custPizza.mass;

	return 0;
}