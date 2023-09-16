#include <iostream>
using namespace std;

long long N, B;
long long matrix[5][5];
long long ans[5][5];

void mul(long long X[5][5], long long Y[5][5]) {
	long long tmp[5][5] = {0};
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				tmp[i][j] += X[i][k] * Y[k][j];
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) X[i][j] = tmp[i][j] % 1000;
	}
}

int main() {
	cin >> N >> B;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> matrix[i][j];
		}
		ans[i][i] = 1;
	}
	while (B > 0) {
		if (B % 2) mul(ans, matrix);
		mul(matrix, matrix);
		B /= 2;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) cout << ans[i][j] << ' ';
		cout << '\n';
	}
}
