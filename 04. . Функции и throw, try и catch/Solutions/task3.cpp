#include <iostream>

int my_pow(int a, int b) {
	if (b < 0) {
		throw std::exception("B should be gte 0!");
	}

	int product = 1;
	for (size_t i = 0; i < b; i++)
	{
		product *= a;
	}

	return product;
}

void my_other_pow(int* a, int* b) {
	*a = my_pow(*a, *b);
}

int main() {
	int a, b, c;
	std::cin >> a >> b;

	try {
		c = my_pow(a, b);
		std::cout << a << " " << b << " " << c << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
