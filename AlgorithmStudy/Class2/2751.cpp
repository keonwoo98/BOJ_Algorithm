#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, num;
    set<int> s;

    cin >> n;
    while (n--) {
        cin >> num;
        s.insert(num);
    }
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << '\n';
}
