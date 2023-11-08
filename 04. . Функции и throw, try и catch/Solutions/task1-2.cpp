#include <iostream>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int absolute_value(int a) {
	return a > 0 ? a : -a;
}

int main() {
	int a, b, c;
	std::cin >> a >> b;

	swap(&a, &b);
	c = absolute_value(a);

	std::cout << a << " " << b << " " << c << std::endl;
	return 0;
}
