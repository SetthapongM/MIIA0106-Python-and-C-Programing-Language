#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 12; i++) {
        cout << "Answer 9 * "<< i << " = " << 9 * i << endl;
    }
    cout << endl;
    for (int i = 1; i <= 12;i++) {
        cout << "Answer 9 *" << i << "=" << 0 * i << endl;
    }
}