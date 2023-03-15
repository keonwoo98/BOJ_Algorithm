#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K, coin, price = 0, cnt = 0;
	vector<int> v;

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> coin;
		v.push_back(coin);
	}
	for (int i = N - 1; i >= 0; i--) {
		if (v[i] > K)
			continue;
		while (price + v[i] <= K) {
			price += v[i];
			cnt++;
		}
		if (price == K)
			break;
	}
	cout << cnt << '\n';
}
