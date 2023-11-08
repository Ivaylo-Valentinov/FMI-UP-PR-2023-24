#include <iostream>

void print_num(const int *const pointer) {
  if (!pointer) {
    throw std::exception("Null pointer is passed as a param");
  }

  std::cout << *pointer << std::endl;
}

int main() {
  int number;
  std::cin >> number;

  try {
    print_num(&number);
    // print_num(nullptr);
  }
  catch (const std::exception e) {
    std::cout << "Exception occurred" << std::endl
              << e.what() << std::endl;
  }
  return 0;
}
