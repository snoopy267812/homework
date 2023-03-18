#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        cout << a << "\n";
    }
    return 0;
}