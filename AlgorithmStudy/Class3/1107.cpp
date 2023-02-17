#include <iostream>
#include <vector>
#include <set>
using namespace std;

int length(int num) {
	int cnt = 0;
	if (!num)
		return 1;
	while (num){
		cnt++;
		num /= 10;
	}
	return cnt;
}

bool avail(int num, vector<int> v) {
	int digit;

	if (!num) {
		for (int i = 0; i < v.size(); i++)
			if (v[i] == 0)
				return false;
		return true;
	}
	while (num) {
		digit = num % 10;
		for (int i = 0; i < v.size(); i++)
			if (digit == v[i])
				return false;
		num /= 10;
	}
	return true;
}

int main() {
	int N, M, num, cnt;
	vector<int> v;
	set<int> s;

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		v.push_back(num);
	}
	s.insert(N > 100 ? N - 100 : 100 - N);
	cnt = 0;
	num = N;
	while (!avail(num, v)) {
		num++;
		cnt++;
		if (cnt > *s.begin())
			break;
	}
	cnt += length(num);
	if (cnt)
		s.insert(cnt);
	else
		s.insert(1);
	cnt = 0;
	num = N;
	while (!avail(num, v)) {
		num--;
		if (num < 0) {
			cnt = *s.begin();
			break;
		}
		cnt++;
		if (cnt > *s.begin())
			break;
	}
	cnt += length(num);
	if (cnt)
		s.insert(cnt);
	else
		s.insert(1);
	cout << *s.begin() << '\n';
}
