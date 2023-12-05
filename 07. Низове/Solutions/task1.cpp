#include <iostream>
#include <cstring>

const size_t SIZE = 1024;

int main() {
	char str[SIZE] = "";
	std::cin.getline(str, SIZE);
	size_t words = str[0] != '\0' && str[0] != ' ' ? 1 : 0;
	size_t len = strlen(str);

	for (size_t i = 1; i < len; i++)
	{
		if (str[i] != ' ' && str[i] == ' ') {
			words++;
		}
	}
	return 0;
}
