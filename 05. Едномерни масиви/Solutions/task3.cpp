#include <iostream>
#include <cassert>

void sortDescendingOrder(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] < array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

int main() {
  const int MAX_ARR_SIZE = 10000;
  int n, array[MAX_ARR_SIZE];

  std::cin >> n;
  assert(n >= 3 && n < MAX_ARR_SIZE);

  for (int i = 0; i < n; i++) {
    std::cin >> array[i];
  }

  sortDescendingOrder(array, n);

  std::cout << "Largest 3 numbers in the array are: " <<
    array[0] << " " <<
    array[1] << " " <<
    array[2] << std::endl;

  return 0;
}
