#include <iostream>
#include <string>

using namespace std;

int main() {

	string cnt, fName, lName;
	cnt = ", ";

	cout << "Enter your first name: ";
	cin >> fName;
	cout << "Enter your last name: ";
	cin >> lName;

	cout << "Here's the information in a single string: " << lName + cnt + fName << endl;

	return 0;
}