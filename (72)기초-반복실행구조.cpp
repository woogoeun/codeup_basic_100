/* 72 */
/*=========================
���� �Է¹޾� ��� ����ϱ�
==========================*/

#include <iostream>
using namespace std;

int main() {
	int n, a, i;
	i = 0;
	cin >> n;

turn:
	cin >> a;

	if (i != n) {
		cout << a << endl;
		i++;
		if (i == n) goto out;
		goto turn;
	}
out:

	return 0;
}