/* 89 */
/*==========
수 나열하기2
===========*/

#include <iostream>
using namespace std;

int main() {
	long long int a, r, n, i = 0, y;

	cin >> a >> r >> n;
	y = a;

	while (1) {
		i++;

		if (i == n) {
			cout << y;
			break;
		}

		y *= r;
	}

	return 0;
}