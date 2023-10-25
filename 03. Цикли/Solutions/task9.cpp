#include <iostream>
#include <cassert>

int main()
{
	size_t n = 0, ans = 0;
	std::cin >> n;
	assert(n >= 2 && n <= 100);

	for (size_t i = 0; i < n; i++) {
		unsigned long long current;
		std::cin >> current;

		bool has_one = false, has_three = false;
		while (current > 0)
		{
			unsigned long long current_digit = current % 10;
			has_three = has_three || current_digit == 3;
			if (has_three && current_digit == 1) {
				ans++;
				break;
			}

			current /= 10;
		}
	}

	if (ans == 0) {
		std::cout << "No\n";
		return 0;
	}

	std::cout << ans << std::endl;
	return 0;
}
