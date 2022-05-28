#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int N, M, num;
	string pokemon;
	map<string, int> book_name;
	map<int, string> book_num;

	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> pokemon;
		book_name.insert(make_pair(pokemon, i + 1));
		book_num.insert(make_pair(i + 1, pokemon));
	}
	while (M--)
	{
		cin >> pokemon;
		if (pokemon[0] >= '1' && pokemon[0] <= '9')
		{
			stringstream ssInt(pokemon);
			ssInt >> num;
			cout << book_num[num] << '\n';
		}
		else
			cout << book_name[pokemon] << '\n';
	}
}
