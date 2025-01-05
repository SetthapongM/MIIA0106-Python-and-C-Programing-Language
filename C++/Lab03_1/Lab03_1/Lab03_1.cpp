#include <iostream>
using namespace std;
int main()
{
	int c = 0;
	for (int i = 0; i <= 10; i++)
	{
		cout << "Value i = " << i << endl;
	}
	cout << endl;
	while (true) {
		int b = 0;
		for (b = 0; b <= 10; b++) {
			cout << "Value b = " << b << endl;
		}
		if (b > 10) {
			break;
		}
	}
	cout << endl;
	do {
		cout << "Value C = " << c << endl;
		c++;
	} while (c <= 10);
}