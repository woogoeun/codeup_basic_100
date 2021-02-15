/* 58 */
/*=============================
둘 다 거짓일 경우만 참 출력하기
==============================*/

#include <iostream>
using namespace std;

int main() {
	bool a, b;

	cin >> a >> b;
	cout << ((a == 0 && b == 0) ? 1 : 0);

	return 0;
}