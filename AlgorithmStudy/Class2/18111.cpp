#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int N, M, B, num, time, min = 256, max = 0;
	vector<int> v;
	map<int, int> m;

	cin >> N >> M >> B;
	for (int i = 0; i < N * M; i++) {
		cin >> num;
		if (min > num)
			min = num;
		if (max < num)
			max = num;
		v.push_back(num);
	}
	num = 0;
	for (int i = min; i <= max; i++) {
		time = 0;
		num = B;
		for (int j = 0; j < N * M; j++) {
			if (i < v[j]) {
				num += (v[j] - i);
				time += (2 * (v[j] - i));
			}
			else if (i > v[j]) {
				num -= (i - v[j]);
				time += (i - v[j]);
			}
		}
		if (num < 0)
			time = -1;
		if (time >= 0) {
			map<int, int>::iterator it = m.find(time);
			if (it == m.end())
				m.insert(make_pair(time, i));
			else {
				if (it->second < i)
					it->second = i;
			}
		}
	}
	cout << m.begin()->first << ' ' << m.begin()->second << '\n';
}
