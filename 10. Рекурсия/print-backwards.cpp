
#include <iostream>
#include <cassert>

using namespace std;

const char* find_start(const char* begin, const char* end) {
	if (begin == end) return end;
	return *begin > 32 ? begin : find_start(begin + 1, end);		
}

const char* find_end(const char* begin, const char* end) {
	if (begin == end) return end;

	return *begin <= 32 ? begin : find_end(begin + 1, end);
}

void print_word(const char* start, const char* end) {
	if (start == end) cout << " ";
	else {
		cout << *start;
		print_word(start + 1, end);
	}
}

void print_backwards(const char* begin, const char* end) {
	assert(begin && end && begin <= end);
	const char* start = find_start(begin, end);
	if (start < end) {
		const char* word_end = find_end(start, end);
		print_backwards(word_end, end);
		print_word(start, word_end);
	}
}

void print_backwards(const char* string) {
	if (!string) return;
	print_backwards(string, string + strlen(string));
}

int main() {

	print_backwards("I\tneed a break!");

	return 0;

}
