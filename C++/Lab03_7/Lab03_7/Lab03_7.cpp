#include <iostream>
using namespace std;
int main()
{
	int num1 = 0; //ref 
	int num2 = 0;// key number
	cout << "Enter Number REF : ";
	cin >> num1;
	do
	{
		cout << "Enter Number key : ";
		cin >> num2;
		if (num2 == num1)
		{
			cout << "Num1 == Num2" << endl;
				break;
		}
		else if (num2 > num1)
		{
			cout << "too mush" << endl;
		}
		else
		{
			cout << "too low" << endl;
		}

	} while (true);
}