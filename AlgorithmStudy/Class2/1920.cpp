#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M, num;
	vector<int> v1, v2;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v1.push_back(num);
	}
	sort(v1.begin(), v1.end());
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		int min = 0;
		int max = N - 1;
		int mid;
		while (min <= max) {
			mid = (min + max) / 2;
			if (num == v1[mid]) {
				v2.push_back(1);
				break;
			}
			else if (num < v1[mid])
				max = mid - 1;
			else
				min = mid + 1;
		}
		if (min > max) {
			v2.push_back(0);
		}
	}
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << ' ';
	cout << '\n';
}