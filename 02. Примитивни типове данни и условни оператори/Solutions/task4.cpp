#include <iostream>

int main() {
	double a, b, c, d, eps = 0.00001;

	std::cin >> a >> b >> c;

	if (a <= eps && a >= -eps) {
		if (b <= eps && b >= -eps) {
			if (c <= eps && c >= -eps) {
				std::cout << "all real numbers" << std::endl;
			}
			else {
				std::cout << "no solution" << std::endl;
			}
		}
		else {
			std::cout << "one root" << std::endl;
		}
		return 0;
	}

	d = b * b - 4 * a * c;
	if (d > eps) {
		std::cout << "two roots" << std::endl;
	}
	else if (d >= -eps) {
		std::cout << "one root" << std::endl;
	}
	else {
		std::cout << "no real root" << std::endl;
	}
	return 0;
}
