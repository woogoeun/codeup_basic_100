/* 45 */
/*=============================
���� 2�� �Է¹޾� �ڵ� ����ϱ�
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