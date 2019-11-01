#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char fName[20], lName[20];
	char cnt[3] = ", ";

	cout << "Enter your first name: ";
	cin.getline(fName, 20);
	cout << "Enter your last name: ";
	cin.getline(lName, 20);

	strcat_s(lName, cnt);

	strcat_s(lName, fName);
	
	cout << "Here's the information in a single string: " << lName << endl;

	return 0;
}