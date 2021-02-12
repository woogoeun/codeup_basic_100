/* 25 */
/*=================================
정수 1개 입력받아 나누어 출력하기
=================================*/

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	scanf_s("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	cout << "[" << a * 10000 << "]" << endl
		<< "[" << b * 1000 << "]" << endl
		<< "[" << c * 100 << "]" << endl
		<< "[" << d * 10 << "]" << endl
		<< "[" << e << "]" << endl;

	return 0;
}