
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{

    int arr[10];
    int s;
    cin >> s;
    int min,max ;
   
    int j;
    for (j =0; j <= 9;j++)
    {
        int sub2 = s.substr(s.find(" ") + j, s.length());
        arr[j] = sub2;
    }

    for (int i : arr)
    {
        if (i < min) {
            min = i;
        }

        if (i > max) {
            max = i;
        }
    }

    cout << "The min element is " << min << std::endl;
    cout << "The max element is " << max << std::endl;

    return 0;
}
