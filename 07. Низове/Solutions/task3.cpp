#include <iostream>
const int MAX_SIZE = 1024;

void replace_duplicating_symbols(char* string, char* result) {
  char previous_char = *string + 1; //something different from the first symbol
   
  while(*string) {
    if (*string != previous_char) {
      *result = *string;
      result++;
    }
    previous_char = *string;
    string++;
  }
}

int main() {
  char string[MAX_SIZE] = "assssdfggggg    sdhasdqwesd", result[MAX_SIZE] = "";

  replace_duplicating_symbols(string, result);

  std::cout << result << std::endl;
  return 0;
}
