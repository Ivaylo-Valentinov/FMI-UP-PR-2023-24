#include <iostream>
#include <cassert>

const size_t SIZE = 1024;
const size_t ALPHABET_SIZE = 1024;

int main() {
	char str[SIZE] = "";
	size_t alphabet[ALPHABET_SIZE]{ 0 };
	std::cin.getline(str, SIZE);
	char* temp = str;
	while (*temp) {
		assert(*temp >= 'a' && *temp <= 'z');
		alphabet[*temp - 'a']++;
		temp++;
	}
	return 0;
}
