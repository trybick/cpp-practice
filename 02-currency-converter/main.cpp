#include <iostream>
#include <iomanip>
#include <sstream>

double USD_TO_EUR = 0.91;
double EUR_TO_USD = 1.09;

void convert(int amount, bool isUSDtoEUR) {
    float answer = amount * (isUSDtoEUR ? USD_TO_EUR : EUR_TO_USD);
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << answer;
    std::string s = stream.str();
    if (isUSDtoEUR) {
        std::cout << (std::to_string(amount) + " USD is " + s) + " EUR";
    } else {
        std::cout << (std::to_string(amount) + " EUR is " + s) + " USD";
    }
}

int main() {
    int option;
    int amount;

    std::cout << "1. Convert USD to EUR" << std::endl;
    std::cout << "2. Option EUR to USD" << std::endl;
    std::cout << "Select an option: ";
    std::cin >> option;

    if (option != 1 && option != 2) {
        throw std::invalid_argument("Invalid input");
        return 1;
    }

    std::cout << "Enter an amount: ";
    std::cin >> amount;
    std::cout << "\n";

    if (option == 1) {
        convert(amount, true);
    } else if (option == 2) {
        convert(amount, false);
    }
    std::cout << "\n";
    return 0;
}
