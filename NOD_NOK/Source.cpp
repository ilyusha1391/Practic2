#include <iostream>
#include <cmath>
using namespace std;

int NOD(int a, int b) {
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

int NOK(int a, int b) {
	return abs(a * b) / NOD(a, b);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "¬ведите переменные a и b: ";
	cin >> a >> b;
	cout << "NOK = " << NOK(a, b) << endl << "NOD = " << NOD(a, b);
	return 0;
}
//ƒл€ проверки использовались пары чисел 12 и 9, 24 и 18, 72 и 128.