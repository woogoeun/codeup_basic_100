/* 46 */
/*==================================
���� 3�� �Է¹޾� �հ� ��� ����ϱ�
===================================*/

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int sum;
	float avg;

	cin >> a >> b >> c;

	sum = a + b + c;
	avg = sum / 3.0;
	cout << fixed;
	cout.precision(1);
	cout << sum << endl << avg;

	return 0;
}