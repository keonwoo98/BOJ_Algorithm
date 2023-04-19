#include <iostream>
using namespace std;

int tree[100001];

void postorder(int start, int end) {
	if (start >= end) return;
	int i;
	for (i = start + 1; i < end; i++)
		if (tree[start] < tree[i]) break;
	postorder(start + 1, i);
	postorder(i, end);
	cout << tree[start] << '\n';
}

int main() {
	int n, i = 0;

	while (cin >> n)
		tree[i++] = n;
	postorder(0, i);
}
