/* 56 */
/*====================================
참/거짓이 서로 다를 때에만 참 출력하기
=====================================*/

#include <iostream>
using namespace std;

int main() {
	bool a, b;

	cin >> a >> b;
	cout << (a != b ? 1 : 0);

	return 0;
}