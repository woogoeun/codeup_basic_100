/* 73 */
/*============================
0 �Էµ� ������ ���� ����ϱ�2
=============================*/

#include <iostream>
using namespace std;

int main() {
	int a;
	
loop:
	cin >> a;

	if (a != 0) {
		cout << a << endl;
		goto loop;
	}

	return 0;
}