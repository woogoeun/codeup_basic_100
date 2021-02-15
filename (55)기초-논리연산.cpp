/* 55 */
/*=========================
하나라도 참이면 참 출력하기
==========================*/

#include <iostream>
using namespace std;

int main() {
	bool a, b;

	cin >> a >> b;

	cout << ((a || b) == 1 ? 1 : 0);

	return 0;
}