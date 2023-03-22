#include <iostream>
#include <set>
using namespace std;

int main() {
	char c;
	int T, k, n;
	multiset<int> ms;

	cin >> T;
	while (T--) {
		cin >> k;
		while (k--) {
			cin >> c >> n;
			if (c == 'I')
				ms.insert(n);
			else {
				if (!ms.empty()) {
					if (n == 1)
						ms.erase(--ms.end());
					else
						ms.erase(ms.begin());
				}
			}
		}
		if (ms.empty())
			cout << "EMPTY\n";
		else
			cout << *(--ms.end()) << ' ' << *ms.begin() <<'\n';
		ms.clear();
	}
}
