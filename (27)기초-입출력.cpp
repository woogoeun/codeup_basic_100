/* 27 */
/*=================================
년월일 입력 받아 형식 바꿔 출력하기
==================================*/

#include <iostream>
using namespace std;

int main() {
	int y, m, d;

	cin >> y;
	cin.ignore(4, '.');
	cin >> m;
	cin.ignore(2, '.');
	cin >> d;

	cout.width(2);
	cout.fill('0');
	cout << d << "-";
	cout.width(2);
	cout.fill('0');
	cout << m << "-";
	cout.width(4);
	cout.fill('0');
	cout << y;

	return 0;
}