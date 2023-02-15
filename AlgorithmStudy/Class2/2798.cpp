#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b) {
	return a > b;
}

int main() {
	int N, M, num, card[3];
	vector<int> v, sum;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end(), comp);
	for (int i = 0; i < N - 2; i++) {
		card[0] = v[i];
		for (int j = i + 1; j < N - 1; j++) {
			card[1] = v[j];
			for (int k = j + 1; k < N; k++) {
				card[2] = v[k];
				sum.push_back(card[0] + card[1] + card[2]);
			}
		}
	}
	sort(sum.begin(), sum.end(), comp);
	for (int i = 0; i < sum.size(); i++) {
		if (sum[i] > M)
			continue;
		cout << sum[i] << '\n';
		break;
	}
}