#include <iostream>
using namespace std;

int main() {
	int A, B, V, R, cnt = 1;

	cin >> A >> B >> V;
	cnt += (V - A) / (A - B);
	R = (V - A) % (A - B);
	if (R)
		cnt++;
	if (A >= V)
		cnt = 1;
	cout << cnt << '\n';
}
