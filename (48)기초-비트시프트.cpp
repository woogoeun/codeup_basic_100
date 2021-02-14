/* 48 */
/*================================
한 번에 2의 거듭제곱 배로 출력하기
=================================*/

#include <iostream>
using namespace std;

int main() {
	int a, b;
	long long int shift;

	cin >> a >> b;
	shift = a << b;
	cout << shift;

	return 0;
}