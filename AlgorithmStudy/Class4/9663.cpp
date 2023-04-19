#include <iostream>
using namespace std;

int N, cnt = 0;
int board[15];

bool check(int level) {
	for (int i = 0; i < level; i++) {
		if (board[i] == board[level] ||
			abs(board[level] - board[i]) == level - i)
			return false;
	}
	return true;
}

void nqueen(int n) {
	if (n == N) cnt++;
	for (int i = 0; i < N; i++) {
		board[n] = i;
		if (check(n)) nqueen(n + 1);
	}
}

int main() {
	cin >> N;
	nqueen(0);
	cout << cnt << '\n';
}
