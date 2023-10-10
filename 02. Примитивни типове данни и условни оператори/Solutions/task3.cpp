#include <iostream>

int main() {
   char letter;
   const int lower_upper_case_diff = 'a' - 'A';

   std::cin >> letter;

   std::cout << (char)(letter - lower_upper_case_diff) << std::endl;

   switch (letter)
   {
   case 'a':
       std::cout << 'z' << ", " << (char)(letter+ 1) << std::endl;
       break;
   case 'z':
       std::cout << (char)(letter - 1) << ", " << 'a' << std::endl;
       break;
   default:
       std::cout << (char)(letter - 1) << ", " << (char)(letter + 1) << std::endl;
       break;
   }

   return 0;
}
