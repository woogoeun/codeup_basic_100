/* 89 */
/*==========
�� �����ϱ�1
===========*/

#include <iostream>
using namespace std;

int main() {
	int a, d, n, i = 0, y;

	cin >> a >> d >> n;
	y = a;

	while (1) {
		i++;

		if (i == n) {
			cout << y;
			break;
		}
		
		y += d;		
	}

	return 0;
 }