#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// ������� 1
	int X, Y;
	cout << "������� ��� �����: ";
	cin >> X >> Y;
	int *px = &X;
	int* py = &Y;
	double res = (static_cast<double> (*px) + *py) / 2;
	cout << "������� �������������� ���� ����� = " << res << "\n\n";


	return 0;
}