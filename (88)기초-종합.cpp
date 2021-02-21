/* 88 */
/*==============
3의 배수는 통과?
===============*/

#include <iostream>
using namespace std;

int main() {
	int n, i = 0;

	cin >> n;
	while (1) {
		i++;

		if (i % 3 == 0) continue;
		else cout << i << " ";

		if (i == n) break;
	}

	return 0;
}