/* 46 */
/*==================================
정수 3개 입력받아 합과 평균 출력하기
===================================*/

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int sum;
	float avg;

	cin >> a >> b >> c;

	sum = a + b + c;
	avg = sum / 3.0;
	cout << fixed;
	cout.precision(1);
	cout << sum << endl << avg;

	return 0;
}