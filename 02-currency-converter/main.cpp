#include <iostream>

int main() {
    int num;
    int answer = 0;

    std::cout << "Type a number to get the factorial: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++) {
      answer += i;
    }

    std::cout << ("The answer is " + std::to_string(answer));

    return 0;
}
