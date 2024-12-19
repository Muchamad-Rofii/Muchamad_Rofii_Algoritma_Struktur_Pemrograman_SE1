#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    a = 0;
    b = 1;
    cout << "Masukkan batas deret: ";
    cin >> d;
    cout << "Deret Fibonacci: ";
    for (int i = 1; i <= d; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
