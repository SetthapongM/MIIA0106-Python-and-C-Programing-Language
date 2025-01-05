#include <iostream>
#include <string>
using namespace std;
// Regular Function สำหรับการคำนวณพื้นฐาน
double add(double a, double b) {
	return a + b;
}

double subtract(double a, double b) {
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	if (b == 0) {
		cout << "Error: Division by zero!" << endl;
		return 0;
	}
	return a / b;
}
//No.6
void countnumber(int get) {
	int i;
	for (i = 1; i <= get; i++) {
		cout << "Number count (for) : " << i << endl;
	}
}
//No.7
void counternumberwhile(int get) {
	int i = 1;
	while (i <= get) {
		cout << "Number count (While) : " << i << endl;
		i++;
	}
}
//No.8
void counternumberdowhile(int get) {
	int i = 1;
	do {
		cout << "Number count (do while) : " << i << endl;
		i++;
	} while (i <= get);
	cout << endl;
}
//9. Sum 1-N (For Loop)
void sumnumberbyforloop() {

	int n, sum = 0;
	// รับค่า n จากผู้ใช้
	cout << "Enter Sum 1-N (For Loop) : ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum = sum + i;
	}
	cout << "Sum 1-N (For Loop) : " << n << " sum = " << sum << endl;
}


// Recursive Function สำหรับการบวกเลข 1 ถึง N
int sum_recursive(int n) {
	if (n == 0) return 0;
	return n + sum_recursive(n - 1);
}

// Main Function ==============================================================
int main() {
	string regisusername, regispassword, username, password;
	cout << "***Please register system***" << endl;
	cout << "Register User : ";
	cin >> regisusername;
	cout << "Register Password : ";
	cin >> regispassword;
	cout << "================================================" << endl;
	cout << endl;
	cout << "***Please login system***" << endl;
	cout << "Please enter your username : ";
	cin >> username;
	cout << "Please enter your password : ";
	cin >> password;

	int countlogin = 0;
	while (countlogin < 3) {
		if (username != regisusername || password != regispassword) {
			cout << endl;
			cout << "***Invalid username or password***" << endl;
			cout << endl;
			countlogin = countlogin + 1;
			if (countlogin >= 3) {
				cout << "***Login fail 3 rounds , Exit the program***" << endl;
				return 0;
			}
		}
		else {
			cout << "Login successful" << endl;
			break;
		}
		if (countlogin < 3) {
			cout << "Please enter your username again : ";
			cin >> username;
			cout << "Please enter your password again : ";
			cin >> password;
		}
	}

	char choice;
	do {
		// แสดงเมนู
		cout << "\nMenu:\n";
		cout << "1. Add Numbers\n2. Subtract Numbers\n3. Multiply Numbers\n";
		cout << "4. Divide Numbers\n5. Calculate Rectangle Area\n";
		cout << "6. Display 1-N (For Loop)\n7. Display 1-N (While Loop)\n";
		cout << "8. Display 1-N (Do While Loop)\n";
		cout << "9. Sum 1-N (For Loop)\n10. Sum 1-N (Recursive)\n";
		cout << "Q/q. Quit\nEnter your choice: ";
		cin >> choice;

		if (choice == '1' || choice == '2' || choice == '3' || choice == '4') {
			double a, b;
			cout << "Enter two numbers: ";
			cin >> a >> b;
			switch (choice) {
			case '1': cout << "Result: " << add(a, b) << endl; break;
			case '2': cout << "Result: " << subtract(a, b) << endl; break;
			case '3': cout << "Result: " << multiply(a, b) << endl; break;
			case '4': cout << "Result: " << divide(a, b) << endl; break;
			}
		}
		else if (choice == '5') {
			double width, height;
			cout << "Enter width and height: ";
			cin >> width >> height;
			cout << "Area: " << multiply(width, height) << endl;
		}
		else if (choice == '6' || choice == '7' || choice == '8') {
			int n;
			cout << "Enter N : ";
			cin >> n;

			//6. Display 1-N (For Loop)
			if (choice == '6') {
				countnumber(n);

			}
			//7. Display 1 - N(While Loop)
			else if (choice == '7') {
				counternumberwhile(n);
			}
			//8. Display 1-N (Do While Loop)
			else if (choice == '8') {
				counternumberdowhile(n);
			}
		}
		//9. Sum 1-N (For Loop)
		else if (choice == '9') {
			sumnumberbyforloop();
			//int n, sum = 0;
			//cout << "Enter N: ";
			//cin >> n;
			//for (int i = 1; i <= n; i++) sum += i;
			//cout << "Sum: " << sum << endl;
		}
		//10. Sum 1-N (Recursive)
		else if (choice == '10') {
			int n;
			cout << "Enter N: ";
			cin >> n;
			cout << "Sum: " << sum_recursive(n) << endl;
		}
		//Q/q. Quit\nEnter your choice: "
		else if (choice == 'Q' || choice == 'q') {
			cout << "Goodbye!" << endl;
		}
		else {
			cout << "Invalid choice. Try again!" << endl;
		}
	} while (choice != 'Q' && choice != 'q');

	return 0;
}