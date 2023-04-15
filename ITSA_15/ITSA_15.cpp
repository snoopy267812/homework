#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;

int main()
{
	string input, save;
	int wordsNum = 0;
	map<char, int> wF;
	string w = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	getline(cin, input);
	istringstream cutStr(input);
	while (getline(cutStr, save, ' '))
	{
		wordsNum++;
		for (int j = 0; j < save.length(); j++)
		{
			if (wF.count(save[j]) == 0) { wF.insert(make_pair(save[j], 1)); }
			else wF[save[j]] += 1;
		}
	}
	cout << wordsNum << endl;
	for (int k = 0; k < 52; k++)
	{
		for (map<char, int>::iterator p = wF.begin(); p != wF.end(); p++)
		{
			if (w[k] == p->first && p->second != 0)
				cout << p->first << " " << ":" << " " << p->second << endl;
		}
	}
	return 0;
}