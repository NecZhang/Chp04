#include <iostream>
#include <array>

using namespace std;

int main() {
	
	array<double, 3> time;
	
	cout << "Please enter 3 time records: \n";
	cin >> time[0] >> time[1] >> time[2];
	cout << "Three are 3 time records and the average time is " << (time[0] + time[1] + time[2]) / 3;

	return 0;
}