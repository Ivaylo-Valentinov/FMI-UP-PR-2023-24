#include <iostream>

int main() {
   const float pi = 3.14;
   float r, h;

   std::cin >> r >> h;

   float surface_area = 2 * pi * r * (r + h);
   std::cout << surface_area << std::endl;

   return 0;
}
