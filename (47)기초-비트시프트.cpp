/* 47 */
/*=================================
정수 1개 입력받아 2배 곱해 출력하기
==================================*/

#include <iostream>
using namespace std;

int main() {
	long long int i;

	cin >> i;

	long long int shift = i << 1;
	cout << shift;

	return 0;
}