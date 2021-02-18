/* 85 */
/*=========================
소스 파일 저장용량 계산하기
==========================*/

#include <iostream>
using namespace std;

int main() {
	long long int h, b, c, s;

	cin >> h >> b >> c >> s;
	long long int bit = h*b*c*s;
	float byte = bit / 8.0;
	float MB = byte / (1024 * 1024);

	cout << fixed;;
	cout.precision(1);
	cout << MB << " MB";

	return 0;
}