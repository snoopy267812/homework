// ITSA_0318_13.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

void sortPoke(vector<string>& a, int n);
int main()
{
	int input = 0, n = 0;
	string Str, s;
	vector<string> pokeS;

	cin >> input;//輸入測試資料筆數
	cin.ignore(1, '\n');//消除於字串後的換行符號
	for (int i = 0; i < input; i++)//依資料筆數決定處理次數
	{
		getline(cin, Str);//讀入一整行
		istringstream cutStr(Str);//轉換成可分割型態
		while (getline(cutStr, s, ' '))//分割並推入向量
		{
			pokeS.push_back(s);
		}
		sortPoke(pokeS, pokeS.size());//排序
		for (int j = 0; j < pokeS.size(); j++)//輸出排序結果
		{
			if (j == pokeS.size() - 1) cout << pokeS[j] << endl;
			else cout << pokeS[j] << " ";
		}
		pokeS.clear();//清空向量給下一筆測資
	}
	return 0;
}
void sortPoke(vector<string>& a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			string t;
			if (a[i][0] > a[j][0]) { t = a[i]; a[i] = a[j]; a[j] = t; }
		}
	}
	//以上為泡沫排序法
	for (int i = 0; i < n; i++)
	{
		for (int j = 0 + i; j < n; j++)
		{
			if (a[i][0] == a[j][0])
			{//針對其數字不同進行轉換型態後比較
				string t, bN = a[i].substr(1, 2), sN = a[j].substr(1, 2);
				istringstream bigN(bN);
				istringstream smaN(sN);
				int b = 0, s = 0;
				bigN >> b; smaN >> s;
				if (b < s) { t = a[i]; a[i] = a[j]; a[j] = t; }
			}
		}
	}
	//最後進行同花色間的排序
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
