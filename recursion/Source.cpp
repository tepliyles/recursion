#include <iostream>
using namespace std;
// Рекурсия- это прием програмирования , при котором функция вызывает саму себя либо непосредственно либо косвенно 
long long factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;

}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите число :";
	cin >> n;
	cout << n << "! = " << factorial(n) << "\n";



	return 0;
}