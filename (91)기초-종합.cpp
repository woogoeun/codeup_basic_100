/* 89 */
/*==========
수 나열하기3
===========*/

#include <iostream>
using namespace std;

int main() {
	long long int a, m, d, n, i = 0, y;

	cin >> a >> m >> d >> n;
	y = a;

	while (1) {
		i++;

		if (i == n) {
			cout << y;
			break;
		}

		y *= m;
		y += d;
	}

	return 0;
}