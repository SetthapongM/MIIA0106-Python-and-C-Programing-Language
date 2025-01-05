#include <iostream>
using namespace std;
int main()
{
	int c = 0;
	for (int i = 0; i <= 10; i++)
	{
		cout << "Value i = " << i << endl;
	}
	cout << "";
	cout << endl;
	cout << "";
	while (true) {
		int b = 0;
		for (b = 0; b <= 10; b++) {
			cout << "Value b = " << b << endl;
		}
		if (b > 10) {
			break;
		}
	}
	cout << "";
	cout << endl;
	cout << "";
	do {
		cout << "Value C = " << c << endl;
		c++;
	} while (c <= 10);
}