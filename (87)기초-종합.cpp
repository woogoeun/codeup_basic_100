/* 86 */
/*=========================
�׸� ���� ����뷮 ����ϱ�
==========================*/

#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;

	int i = 1;
	while (1) {
		sum += i;
		i++;

		if (sum >= n) break;
 	}
	cout << sum;

	return 0;
}