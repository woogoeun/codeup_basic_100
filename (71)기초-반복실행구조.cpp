/* 71 */
/*============================
0 �Էµ� ������ ���� ����ϱ�1
=============================*/

#include <iostream>
using namespace std;

int main() {
	int a;
	
	turn:
	cin >> a;
	
	if (a != 0) {
		cout << a << endl;
		goto turn;
	}

	return 0;
}