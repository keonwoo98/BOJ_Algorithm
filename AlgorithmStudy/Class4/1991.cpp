#include <iostream>
#include <string>
using namespace std;

int tree[27][2];

void preorder(int n) {
	if (n == -1) return;
	cout << (char)(n + 'A');
	preorder(tree[n][0]);
	preorder(tree[n][1]);
}

void inorder(int n) {
	if (n == -1) return;
	inorder(tree[n][0]);
	cout << (char)(n + 'A');
	inorder(tree[n][1]);
}

void postorder(int n) {
	if (n == -1) return;
	postorder(tree[n][0]);
	postorder(tree[n][1]);
	cout << (char)(n + 'A');
}

int main() {
	int N;
	char n, l, r;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n >> l >> r;
		n -= 'A';
		l == '.' ? tree[n][0] = -1 : tree[n][0] = l - 'A';
		r == '.' ? tree[n][1] = -1 : tree[n][1] = r - 'A';
	}
	preorder(0);
	cout << '\n';
	inorder(0);
	cout << '\n';
	postorder(0);
	cout << '\n';
}
