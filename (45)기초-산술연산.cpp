/* 45 */
/*=============================
정수 2개 입력받아 자동 계산하기
==============================*/

#include <iostream>
using namespace std;

int main() {
	int a, b;

	cin >> a >> b;
	cout << a + b << endl
		<< (unsigned)(a - b) << endl
		<< a * b << endl
		<< a / b << endl
		<< a % b << endl;
	cout << fixed;
	cout.precision(2);
	cout << (float)a / b;

	return 0;
}