/* 74 */
/*====================================
정수 1개 입력받아 카운트다운 출력하기1
=====================================*/

#include <iostream>
using namespace std;

int main() {
	int a;

	cin >> a;

	while (a != 0) {
		cout << a << endl;
		a--;
	}

	return 0;
}