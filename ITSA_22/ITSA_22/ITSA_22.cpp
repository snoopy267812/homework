// ITSA_22.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include<iostream>
using namespace std;
int main() {
	int arr[3][3];//開井字陣列 
	for (int i = 0; i < 3; i++)//3排讀三次 
	{
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];//依序輸入 
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])//直接進行整排檢查 
		{
			cout << "True" << endl;
			return 0;
		}
	}
	for (int x = 0; x < 3; x++)//直行檢查 
	{
		if (arr[0][x] == arr[1][x] && arr[1][x] == arr[2][x])
		{
			cout << "True" << endl; return 0;
		}
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])//反斜線檢查 
	{
		cout << "True" << endl; return 0;
	}
	else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])//斜線檢查 
	{
		cout << "True" << endl; return 0;
	}
	else cout << "False" << endl; return 0;//都沒有 
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
