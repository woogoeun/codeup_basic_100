/* 20 */
#include <iostream>
using namespace std;
int main() {
	int front_num, back_num;
	cin >> front_num;
	cin.ignore(6, '-');
	cin >> back_num;
	cout.width(6);
	cout.fill('0');
	cout << front_num << back_num;
	return 0;
}