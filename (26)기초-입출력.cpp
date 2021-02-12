/* 26 */
/*============================
시분초 입력받아 분만 출력하기
============================*/

#include <iostream>
using namespace std;

int main() {
	int h, m, s;

	cin >> h;
	cin.ignore(2, ':');
	cin >> m;
	cin.ignore(2, ':');
	cin >> s;

	cout << m;

	return 0;
}