#include <iostream>
#include <cstring>
const int MAX_SIZE = 1024;

void remove_duplicating_asterisks(char* string, char* result) {
  char previous_char = '\0'; //We need to make sure that it is not the same as the first char
  // It can be empty string, but this is the default result, so its not a problem
   
  while(*string) {
    if (*string == '*' && *string == previous_char) {
      string++;
      continue;
    }

    *result = *string;
    result++;
    previous_char = *string;
    string++;
  }
}


bool match_string_with_scheme(char* string, char* scheme) {
  char* previous_asterisk = nullptr;

  while(*string != '\0') {
    if (*scheme == '\0') {
      if (!previous_asterisk) {
        return false;
      }
      scheme = previous_asterisk;
    }
    if (*scheme == '*') {
      previous_asterisk = scheme;
      scheme++;
    }
    if (*scheme == '?' || *scheme == *string) {
      scheme++;
    }
    else if (*scheme != '?' && *scheme != *string) {
      if (!previous_asterisk) {
        return false;
      }
      scheme = previous_asterisk;
    }
    string++;
  }

  if (*scheme != '\0') {
    return strcmp(scheme, "*") == 0;
  }
  return true;
}

int main() {
  char string[MAX_SIZE] = "Hello", scheme[MAX_SIZE] = "Hel?o*", new_scheme[MAX_SIZE] = "";

  remove_duplicating_asterisks(scheme, new_scheme);

  std::cout << match_string_with_scheme(string, new_scheme) << std::endl;
  return 0;
}
