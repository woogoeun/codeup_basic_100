/* 66 */
/*==============================
정수 3개 입력받아 짝/홀 출력하기
===============================*/

#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	if (a % 2 == 0) {
		cout << "even" << endl;
	}
	else if (a % 2 == 1) {
		cout << "odd" << endl;
	}
	if (b % 2 == 0) {
		cout << "even" << endl;
	}
	else if (b % 2 == 1) {
		cout << "odd" << endl;
	}
	if (c % 2 == 0) {
		cout << "even" << endl;
	}
	else if (c % 2 == 1) {
		cout << "odd" << endl;
	}

	return 0;
}