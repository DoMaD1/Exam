#include <iostream>
using namespace std;
int res (int a, int b, int c){
	int r = b / a;
	if (c <= r) {
		return c;
	}
	else {
		return r;
	}

}
int main()
{
	setlocale(0, ".1251");
	int a, b, c;
	cout << "Введiть цiну однiєi пляшки: ";
	cin >> a;
	cout << "Введiть кiлькiсть коштiв у хлопчика: ";
	cin >> b;
	cout << "Введiть кiлькiсть пляшок напою в автоматi: ";
	cin >> c;
	cout << res(a, b, c);
	return 0;
}