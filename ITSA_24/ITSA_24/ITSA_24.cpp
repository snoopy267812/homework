// ITSA_24.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include<iostream>
#include<cmath>
using namespace std;
void m(double r, int p, int n);
int main() {
	double r = 0;
	int n = 0, p = 0;
	cin >> r >> n >> p;
	m(r, p, n);
	return 0;
}
void m(double r, int p, int n)
{
	int s = p, pm[30], pt[30], rr = floor(r * 1000);;

	for (int i = 0; i < 30; i++)
	{
		if (i >= 0 && i < 11)pm[i] = 0;
		else { pm[i] = p % 10; p /= 10; }
		pt[i] = 0;
	}
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < 30; i++)//p=p*r
		{
			pt[i] += pm[i] * rr;
		}
		for (int i = 0; i < 30; i++)//整數進位 
		{
			pt[i + 1] += pt[i] / 10;
			pt[i] %= 10;
		}
		for (int i = 3; i < 30; i++)//整數移位 
		{
			pt[i - 3] = pt[i];
		}
		for (int i = 0; i < 30; i++)//p+=p
		{
			pt[i] += pm[i];
		}
		for (int i = 0; i < 30; i++)//整數進位 
		{
			pt[i + 1] += pt[i] / 10;
			pt[i] %= 10;
		}
		if (k == n - 1)//是否繼續計算複利 
		{
			bool t = 0;//判定是否為不輸出的空值 
			for (int i = 29; i >= 11; i--)
			{
				if (pt[i] != 0 || t != 0)//尋找首個非零值並輸出之後的零 
				{
					t++;
					cout << pt[i];
					if (i == 11)cout << endl;//結尾則換行 
				}
				else continue;
			}
		}
		else
		{
			pt[11] += s;
			for (int i = 0; i < 30; i++)
			{
				pm[i] = pt[i];
				pt[i] = 0;
			}
		}
	}
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
