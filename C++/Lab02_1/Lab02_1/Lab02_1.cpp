#include <iostream>
using namespace std;
int main() {
	int choice;
	cout << "Please select menu below" << endl;
	cout << "1. Program to find the area of ​​a rectangle" << endl;
	cout << "2. Program to find the volume of a rectangle" << endl;
	cout << "3. Employee salary calculation program" << endl;
	cout << "Please choice : ";
	cin >> choice;

	cout << " " << endl;
	cout << "===============================" << endl;
	cout << " " << endl;

	switch (choice) {
	case 1:
		cout << "area of ​​a rectangle" << endl;
		break;
	case 2:
		cout << "volume of a rectangle" << endl;
		break;
	case 3:
		cout << "salary calculation program" << endl;
		break;
	default:
		cout << "Valid Choice :( " << endl;
		break;
	}

	if (choice == 1) {

		//โปรแกรมหาพ้ืนที่ของสี่เหลี่ยมผืนผ้า
		float width, length, area;
		cout << "width : ";
		cin >> width;
		cout << "length : ";
		cin >> length;
		area = width * length;
		cout << "Area : " << area;

		cout << " " << endl;
		cout << "===============================" << endl;
		cout << " " << endl;

	}
	else if (choice == 2) {

		//โปรแกรมหาปริมาตรของสี่เหลี่ยมผืนผ้า
		float width, length, high, area;
		cout << "Width : ";
		cin >> width;
		cout << "Length : ";
		cin >> length;
		cout << "High : ";
		cin >> high;
		area = width * length * high;
		cout << area;

		cout << " " << endl;
		cout << "===============================" << endl;
		cout << " " << endl;

	}
	else if (choice == 3) {

		//Program คำนวณเงินเดือนพนักงาน
		int empID; //เก็บรหัสพนักงาน
		float hoursWorked; //เก็บชั่วโมงการทำงาน
		float hourlyRate; //เก็บอัตราค่าแรง
		float grossSalary; //ค่าจ้างก่อนหักภาษี
		float tax; //ภาษีที่ต้องจ่าย
		float netSalary;//ค่าจ้างสุทธิ
		int OT;
		float wages; //ค่าจ้าง

		cout << "Please enter your EMP ID : ";
		cin >> empID;

		cout << "Please enter hoursWorked : ";
		cin >> hoursWorked;

		cout << "Please enter HourlyRate : ";
		cin >> hourlyRate;

		if (hoursWorked <= 30) {
			grossSalary = hoursWorked * hourlyRate;
		}
		else if (hoursWorked > 30) {
			grossSalary = hoursWorked * hourlyRate;
			OT = (hoursWorked - 30) * (hourlyRate + 50);
			grossSalary = grossSalary + OT;
		}
		tax = grossSalary * 7 / 100;
		netSalary = grossSalary - tax;
		cout << "EMP IP : " << empID << endl;
		cout << "GrossSalary : " << grossSalary << endl;
		cout << "tax : " << tax << endl;
		cout << "NetSalary : " << netSalary << endl;
	}


	cout << " " << endl;
	cout << "===============================" << endl;
	cout << " " << endl;

	cout << "End Program :) ";
	return 0;
}