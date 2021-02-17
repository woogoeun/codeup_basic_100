/* 75 */
/*====================================
정수 1개 입력받아 카운트다운 출력하기2
=====================================*/

#include <iostream>
using namespace std;

int main() {
	int a;

	cin >> a;

	while (a != 0) {
		a--;
		cout << a << endl;
	}

	return 0;
}