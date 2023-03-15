#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, num;
	vector<int> v, arr;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	num = 0;
	for (int i = 0; i < N; i++) {
		num += v[i];
		arr.push_back(num);
	}
	num = 0;
	for (int i = 0; i < N; i++)
		num += arr[i];
	cout << num << '\n';
}
