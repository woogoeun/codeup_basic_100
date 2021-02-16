/* 63 */
/*=============================
두 정수 입력받아 큰 수 출력하기
==============================*/

#include <iostream>
using namespace std;

int main() {
	int a, b;

	cin >> a >> b;
	cout << (a > b ? a : b);

	return 0;
}