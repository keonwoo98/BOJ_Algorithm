#include <iostream>
#include <vector>
using namespace std;

int main() {
	int K, N, line, cnt, ans;
	long long min, max, mid;
	vector<int> v;

	cin >> K >> N;
	min = 1;
	max = 0;
	for (int i = 0; i < K; i++) {
		cin >> line;
		if (max < line)
			max = line;
		v.push_back(line);
	}
	ans = 0;
	while (min <= max) {
		mid = (min + max) / 2;
		cnt = 0;
		for (int i = 0; i < v.size(); i++)
			cnt += v[i] / mid;
		if (cnt >= N) {
			min = mid + 1;
			if (ans < mid)
				ans = mid;
		}
		else
			max = mid - 1;
	}
	cout << ans << '\n';
}
