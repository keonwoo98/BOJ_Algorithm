#include <iostream>
#include <set>
using namespace std;

int main() {
	int N, M, cnt1, cnt2;
	char **arr;
	set<int> s;

	cin >> N >> M;
	arr = new char*[N];
	for (int i = 0; i < N; i++) {
		arr[i] = new char[M];
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];
	}
	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			cnt1 = cnt2 = 0;
			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {
					if ((k + l) % 2) {
						if (arr[k][l] == 'B')
							cnt1++;
						else
							cnt2++;
					} else {
						if (arr[k][l] == 'W')
							cnt1++;
						else
							cnt2++;
					}
				}
			}
			s.insert(cnt1);
			s.insert(cnt2);
		}
	}
	cout << *s.begin() << '\n';
	for (int i = 0; i < N; i++)
		delete arr[i];
	delete arr;
}
