#include <iostream>

int sum(int x, int y) {
	return x + y;
}
int diff(int x, int y) {
	return x - y;
}
int multiplication(int x, int y) {
	return x * y;
}
double division(double x, double y) {
	return x / y;
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
	int a = 5, b = 10;

	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);

	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;
}