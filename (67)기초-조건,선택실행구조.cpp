/* 67 */
/*=========================
���� 1�� �Է¹޾� �м��ϱ�
=========================*/

#include <iostream>
using namespace std;

int main() {
	int a;

	cin >> a;

	if (a < 0) {
		cout << "minus" << endl;
		if (a % 2 == 0) cout << "even" << endl;
		
		else cout << "odd" << endl;
	}
	if (a > 0) {
		cout << "plus" << endl;
		if (a % 2 == 0) cout << "even" << endl;

		else cout << "odd" << endl;
	}

	return 0;
}