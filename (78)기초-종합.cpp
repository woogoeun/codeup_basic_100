/* 78 */
/*============
짝수 합 구하기
=============*/

#include <iostream>
using namespace std;

int main() {
	int a, i, sum;

	cin >> a;
	
	i = 0; sum = 0;
	while (i != a + 1) {
		if (i % 2 == 0) {
			sum += i;
		}
		i++;
	}

	cout << sum;

	return 0;
}