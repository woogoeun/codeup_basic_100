/* 27 */
/*=================================
����� �Է� �޾� ���� �ٲ� ����ϱ�
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