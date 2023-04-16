#include <iostream>
#include <string>
using namespace std;
int main()
{
    double n,y,x,i,j;
    string s;
    cout << "輸入行";
    cin >> n;
    double ky[n];
    cout << "輸入大數";
    cin >> x;
    s = x;
    for (i = 0; i <= n; i++)
    {
        string sub1 = s.substr(0, s.find(" "));
        sub1= ky[0];
        string sub2 = s.substr(s.find(" ") + i, s.length());
        sub2 = ky[i];
        if (i / 2 == 1||i!=0) {
            j=ky[i] + ky[i - 1];
            cout << j << "\n";
        }
    }

    return 0;
}