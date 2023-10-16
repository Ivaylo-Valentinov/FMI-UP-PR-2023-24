#include <iostream>

int main() {
    unsigned long long egn;
    std::cin >> egn;

    unsigned int day, month, year;
    day = (egn / 10000) % 100;
    month = (egn / 1000000) % 100;
    year = (egn / 100000000) % 100;

    unsigned int month_first_number = month / 10;
    if (month_first_number == 4 || month_first_number == 5) {
        month -= 40;
        year += 2000;
    }
    else if (month_first_number == 2 || month_first_number == 3) {
        month -= 20;
        year += 1800;
    }
    else {
        year += 1900;
    }

    std::cout << day << "." << month << "." << year << std::endl;

    return 0;
}
