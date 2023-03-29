#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>

using namespace std;

int pow(int a, int b) {
	int sum = a;
	for (int i = 1; i < b; i++) {
		sum = sum * a;
	}
	return sum;
}
int diaSum(int a, int b) {
	int sum = 0;
	for (int i = 0; i < b; i++) {
		if (i < b && i > a) {
			sum += i;
		}
	}
	return sum;
}
void perfect(int a,int b) {
	int sum = 0;
	for (int i = 1; i < b; i++) {
		sum = 0;
		if (i > a && i < b) {

			for (int j = 1; j < i; j++) {

				if (i % j == 0) {
					sum += j;
				}
			}

			if (i == sum) {
				cout << i << " ";
				sum = 0;
			}
		}
	}
}
void cards() {
	int a = 0;
	cout << "Выберите карту:\n[1] - Пики\n[2] - Бубна\n[3] - Трефы\n[4] - Черви\n[5] - все сразу\n";
	cin >> a;
	switch (a) {
	case 1:// Пики
		cout << "\n _____\n|A .  |\n| /.\\ |\n|(_._)|\n|  |  |\n|____V|" << endl;
		break;
	case 2:// Бубна
		cout << "\n _____\n|A ^  |\n| / \\ |\n| \\ / |\n|  .  |\n|____V|" << endl;
		break;
	case 3:// Трефы
		cout << "\n _____\n|A _  |\n| ( ) |\n|(_'_)|\n|  |  |\n|____V|" << endl;
		break;
	case 4:// Черви
		cout << "\n _____\n|A_ _ |\n|( v )|\n| \\ / |\n|  .  |\n|____V|" << endl;
		break;
	default:
		cout << "\n _____\n|A .  |\n| /.\\ |\n|(_._)|\n|  |  |\n|____V|" << endl;
		cout << "\n _____\n|A ^  |\n| / \\ |\n| \\ / |\n|  .  |\n|____V|" << endl;
		cout << "\n _____\n|A _  |\n| ( ) |\n|(_'_)|\n|  |  |\n|____V|" << endl;
		cout << "\n _____\n|A_ _ |\n|( v )|\n| \\ / |\n|  .  |\n|____V|" << endl;
		break;
	}
}
void happynum(int a) {
	int A = 0, B = 0;
	A = (a % 10) + ((a / 10) % 10) + ((a / 100) % 10);
	B = ((a / 1000) % 10) + ((a / 10000) % 10) + (a / 100000);

	if (A == B) {
		cout << "Число " << a << " является счастливым." << endl;
	}

}

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	
	cout << "Задание 1\n";
	//int a, b;
	//cout << "Введите число и степень:\n";
	//cin >> a, b;
	cout << "Степень: " << pow(2, 4) << endl; // << pow(a,b) << endl;
	//a = 0;
	//b = 0;


	cout << "\n\nЗадание 2\n";
	//cout << "Введите два диапозона чисел:\n";
	//cin >> a, b;
	cout << "Сумма диапозона: " << diaSum(1, 10) << endl; // << diaSum(a,b) << endl;


	cout << "\n\nЗадание 3\n";
	cout << "Совершенные числа: "; perfect(1, 10000); cout << endl;

	
	cout << "\n\nЗадание 4\n";
	cards();


	cout << "\n\nЗадание 5\n";
	int A = 0;
	cout << "Введите шестизначное число:\n";
	cin >> A;
	happynum(A);
}
