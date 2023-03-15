#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string exp;
	vector<int> v1;
	vector<char> v2;

	cin >> exp;
	int pos = 0;
	for (int i = 0; i < exp.length(); i++) {
		if (exp[i] == '+' || exp[i] == '-' || i + 1 == exp.length()) {
			int n = stoi(exp.substr(pos, i + 1));
			pos = i + 1;
			v1.push_back(n);
			if (exp[i] == '+' || exp[i] == '-')
				v2.push_back(exp[i]);
		}
	}
	int num = v1[0];
	int sum = 0;
	bool flag = true;
	for (int i = 0; i < v2.size(); i++) {
		sum += v1[i + 1];
		if (v2[i] == '-')
			flag = false;
		if (v2[i] == '+' || i + 1 == v2.size()) {
			if (flag) {
				num += sum;
				flag = true;
			}
			else
				num -= sum;
			sum = 0;
		}
	}
	cout << num << '\n';
}
