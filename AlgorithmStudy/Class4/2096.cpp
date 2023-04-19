#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, i1, i2;
	int game[3];
	int minScore[2][3];
	int maxScore[2][3];

	cin >> N;
	minScore[0][0] = maxScore[0][0] = 0;
	minScore[0][1] = maxScore[0][1] = 0;
	minScore[0][2] = maxScore[0][2] = 0;
	for (int i = 1; i <= N; i++) {
		cin >> game[0] >> game[1] >> game[2];
		if (i % 2) {
			i1 = 1;
			i2 = 0;
		} else {
			i1 = 0;
			i2 = 1;
		}
		minScore[i1][0] = min(minScore[i2][0], minScore[i2][1]) + game[0];
		minScore[i1][1] = min(minScore[i2][0], min(minScore[i2][1], minScore[i2][2])) + game[1];
		minScore[i1][2] = min(minScore[i2][1], minScore[i2][2]) + game[2];
		maxScore[i1][0] = max(maxScore[i2][0], maxScore[i2][1]) + game[0];
		maxScore[i1][1] = max(maxScore[i2][0], max(maxScore[i2][1], maxScore[i2][2])) + game[1];
		maxScore[i1][2] = max(maxScore[i2][1], maxScore[i2][2]) + game[2];
	}
	cout << max(maxScore[i1][0], max(maxScore[i1][1], maxScore[i1][2])) << ' ';
	cout << min(minScore[i1][0], min(minScore[i1][1], minScore[i1][2])) << '\n';
}
