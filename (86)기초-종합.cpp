/* 86 */
/*=========================
�׸� ���� ����뷮 ����ϱ�
==========================*/

#include <iostream>
using namespace std;

int main() {
	long long int w, h, b;

	cin >> w >> h >> b;

	float bit = w * h * b;
	float byte = bit / 8.0;
	float MB = byte / (1024 * 1024);

	cout << fixed;
	cout.precision(2);
	cout << MB << " MB";

	return 0;
}