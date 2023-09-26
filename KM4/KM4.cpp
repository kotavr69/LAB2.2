#include <iostream>
#include <cmath>


using namespace std;

const double PI = 3.141592653589793;

int main() {
	setlocale(LC_ALL, "ru");

	int r1;
	int r2;
	cout << "Введите радиус круга 1: ";
	cin >> r1;
	do {
		cout << "Введите радиус круга 2: ";
		cin >> r2;
	} while (r2>=r1);
	double s1, s2, s3;
	s1 = PI * pow(r1, 2);
	s2 = PI * pow(r2, 2);
	s3 = PI * pow(r1, 2) - PI * pow(r2, 2);
	cout << "Площадь первого круга = " << s1 << endl;
	cout << "Площадь второго круга = " << s2 << endl;
	cout << "Площадь кольца = " << s3 << endl;
}


#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int namber;
	cout << "Введите трёхзначное число: ";
	cin >> namber;
	cout << "Получено двухзначное число: " << namber % 10 << (namber / 10) % 10;
}