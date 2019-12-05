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
	cout << "������� ���������� a � b: ";
	cin >> a >> b;
	cout << "NOK = " << NOK(a, b) << endl << "NOD = " << NOD(a, b);
	return 0;
}
//��� �������� �������������� ���� ����� 12 � 9, 24 � 18, 72 � 128.