#include<iostream>
using namespace std;

int f(int n)
{
    if (n == 0||n==1)
        return n+1;
    if (n >= 1)
        return f(n/2)+f(n - 1);
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << f(n) << endl;
    }

    return 0;
}