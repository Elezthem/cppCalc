#include <iostream>
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	int result = 1 + rand() % 40;
	cout << result << endl;

	// calc c++

	float number1, number2, res;
	cout << "Enter num1: ";
	cin >> number1;
	
	cout << "Enter num2: ";
	cin >> number2;

	//+, -, *, /
	char math;
	cout << "Enter math symbol: ";
	cin >> math;

	switch (math) {
	case '+': res = number1 + number2;  break;
	case '-': res = number1 - number2;  break;
	case '*': res = number1 * number2;  break;
	case '/': res = number1 / number2;  break;
	default: res = 0; cout << "Error"; break;
	}

	cout << "Result: " << res << endl;

	// -----
	int a = 15, b = 12, c;
	c = a % b;
	cout << c;

	// -----
	a -= 2;
	a--;

	return 0;
}