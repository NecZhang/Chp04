#include <iostream>
#include <string>

using namespace std;

int main() {

	string fName, lName;
	char grade;
	int age;
	
	cout << "What is your first name? ";
	getline(cin, fName);
	cout << "What is your last name? ";
	getline(cin, lName);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << lName << ", " << fName << "\nGrade: " << char(grade + 1) << "\nAge: " << age;

	return 0;
}