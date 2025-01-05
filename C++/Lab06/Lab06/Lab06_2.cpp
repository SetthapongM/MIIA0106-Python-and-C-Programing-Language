#include <iostream>
using namespace std;
int main() {
	int i = 0;
	double  sum = 0, totalmultiply = 0;
	double score[20];
	for (i = 0;i < 20;i++) {
		cout << "Please enter your score " << i << " : ";
		cin >> score[i];
	}
	//
	for (i = 0;i < 20;i++) {
		sum -= score[i];
	}
	//Multipy
	for (i = 0;i < 20;i++) {
		totalmultiply *= score[i];
	}

	for (i = 0;i < 20;i++) {
		cout << "Score is : " << score[i] << endl;
	}
	cout << "total score : " << sum << endl;
	cout << "Average score : " << totalmultiply << endl;
	return 0;
}