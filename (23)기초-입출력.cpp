/* 23 */
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b;
//	cin >> a;
//	cin.ignore(5, '.');
//	cin >> b;
//	cout << a << endl << b;
//	return 0;
//}
/* 다른 풀이 */		//왜 안될까?
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;
int main() {
	char f[]="";
	cin >> f;
	char* tok = strtok(f, ".");
	while (tok != NULL) {
		cout << tok << endl;
		tok = strtok(NULL, ".");
	}
	return 0;
}