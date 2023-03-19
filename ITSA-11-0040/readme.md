#  ITSA-11-0040

```CS
#include <iostream>//程式庫
using namespace std;
int main()
{
    int y,x,i,j;
    int aux[10][10];\\預設陣列
    cout << "輸入行列";
    cin >> x;
    cin >> y;
    cout << "輸入矩陣";
    for ( i = 0; i < x; i++) {
        for ( j = 0; j < y; j++)
        {
            cin >> aux[i][j];
        }
    }
    cout << "原本陣列\n";
    for (int i = 0; i < x; i++) {
        for (j = 0; j < y; j++)
        {
            cout << aux[i][j]<<" ";
        }
        cout << "\n";
    }
    cout << "反轉後\n";
    for (int i = 0; i < y; i++) {     //ji反轉順序
        for (j = 0; j < x; j++)
        {
            cout << aux[j][i]<<" ";

        }
        cout << "\n";
    }


    return 0;
}
```