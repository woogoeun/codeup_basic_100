/* 64 */
/*=====================================
정수 3개 입력받아 가장 작은 수 출력하기
======================================*/

#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;
	cout << ((a > b ? b : a) > c ? c : (a > b ? b : a));

	return 0;
}