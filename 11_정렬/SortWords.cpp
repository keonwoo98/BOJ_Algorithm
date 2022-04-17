#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int compare(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

int main(void)
{
	int N;
	string *words;

	cin >> N;
	words = new string[N];
	for (int i = 0; i < N; i++)
		cin >> words[i];
	sort(words, words + N, compare);
	for (int i = 0; i < N; i++)
	{
		if (i + 1 < N && words[i] == words[i + 1])
			continue ;
		cout << words[i] << '\n';
	}
	delete []words;
}
