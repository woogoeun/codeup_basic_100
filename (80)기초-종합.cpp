/* 80 */
/*===================
�������� ���ؾ� �ұ�?
====================*/

#include <iostream>
using namespace std;

int main() {
	int a, i, sum = 0;

	cin >> a;
	for (i = 1; sum < a; i++) {
		sum += i;
	}
	
	cout << i - 1;
	return 0;
}