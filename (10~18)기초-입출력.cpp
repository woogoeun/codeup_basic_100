/* 10 */
//#include <iostream>
//using namespace std;
//int main() {
//	int a;
//	cin >> a;
//	cout << a;
//	return 0;
//}

/* 11 */
//#include <iostream>
//using namespace std;
//int main() {
//	char a;
//	cin >> a;
//	cout << a;
//	return 0;
//}

/* 12 */
//#include <iostream>
//using namespace std;
//int main() {
//	float a;
//	cin >> a;
//	cout << fixed;
//	cout.precision(6);
//	cout << a;
//	return 0;
//}

/* 13 */
//#include <iostream>
//using namespace std;
//int main(){
//	int a, b;
//	cin >> a >> b;
//	cout << a << " " << b;
//	return 0;
//}

/* 14 */
//#include <iostream>
//using namespace std;
//int main() {
//	char a, b;
//	cin >> a >> b;
//	cout << b << " " << a;
//	return 0;
//}

/* 15 */
//#include <iostream>
//using namespace std;
//int main() {
//	float f;
//	cin >> f;
//	cout << fixed;  // �����Ҽ��� ǥ��
//	cout.precision(2);
//	cout << f;
//	return 0;
//}

/* 17 */
//#include <iostream>
//using namespace std;
//int main() {
//	int a;
//	cin >> a;
//	cout << a << " " << a << " " << a;
//	return 0;
//}

/* 18 */
#include <iostream>
using namespace std;
int main() {
	int h, m;
	cin >> h;
	cin.ignore(5, ':'); // 5�� ���� ����. ':' ������ �Է� ����
	cin >> m;
	cout << h << ":" << m;
	return 0;
}