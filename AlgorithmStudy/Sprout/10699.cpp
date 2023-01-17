#include <iostream>
#include <ctime>
using namespace std;

int main() {
	time_t timer;
	struct tm* t;
	timer = time(NULL);
	t = localtime(&timer);

	int y = t->tm_year + 1900;
	int m = t->tm_mon + 1;
	int d = t->tm_mday;

	cout << y;
	cout << '-';
	m / 10 == 1 ? cout << m : cout << '0' << m;
	cout << '-';
	d / 10 == 1 ? cout << d : cout << '0' << d;
	cout << '\n';
}
