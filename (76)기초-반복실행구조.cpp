/* 76 */
/*===============================
���� 1�� �Է¹޾� ���ĺ� ����ϱ�
================================*/

#include <iostream>
using namespace std;

int main() {
	char a;

	cin >> a;

	int i = 'a';
	do {
		cout << (char)i << " ";
		i++;
	} while (i != a + 1);

	return 0;
}