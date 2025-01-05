#include <iostream>
using namespace std;
int main()
{
	int car = 0;
	cout << " 1 = Turn left" << endl;
	cout << " 2 = Turn right" << endl;
	cout << " 3 = Turn go ahead" << endl;
	cout << " Please enter Answer : ";
	cin >> car;
	switch (car) {
	case 1:
		cout << " Car has turn left " << endl;
		break;
	case 2:
		cout << " Car has turn right " << endl;
		break;
	case 3:
		cout << " Car has go ahead " << endl;
		break;
	default:
		cout << " Your car error " << endl;
	}
}
