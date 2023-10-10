#include <iostream>

int main() {
   unsigned int a, b, temp;

   std::cin >> a >> b;

   temp = a;
   a = b;
   b = temp;

   std::cout << a << " " << b << std::endl;
   return 0;
}
