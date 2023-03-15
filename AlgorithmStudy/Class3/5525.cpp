#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, M, cnt = 0;
	string S;

	cin >> N >> M >> S;
	for (int i = 0; i + 2 < M; i++) {
		if (S[i] == 'I' && S[i + 1] == 'O' && S[i + 2] == 'I') {
			int p = 1;
			i += 2;
			while (i + 2 < M && S[i + 1] == 'O' && S[i + 2] == 'I') {
				i += 2;
				p++;
			}
			if (p >= N)
				cnt += p - N + 1;
		}
	}
	cout << cnt << '\n';
}
