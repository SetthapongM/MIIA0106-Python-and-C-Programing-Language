#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (num <= 1) {
        cout << num << " is not prime number " << endl; // เพราะ 1 ไม่เป็นจำนวนเฉพาะ เพราะหนึ่งไม่ได้มีตัวที่หารได้ลงตัว 2 ตัว
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            cout << num << " is not prime number " << endl;
            return 0;
        }
    }
    cout << num << " is prime number " << endl;
    return 0;
}