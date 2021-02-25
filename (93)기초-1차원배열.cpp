/* 93 */
/*======================
이상한 출석 번호 부르기1
=======================*/

#include <iostream>
using namespace std;

int main() {
	int n, t;
	int array[23] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> t;
		array[t - 1] += 1;
	}
	for (int j = 0; j < 23; j++) {
		cout << array[j] << " ";
	}

	return 0;
}