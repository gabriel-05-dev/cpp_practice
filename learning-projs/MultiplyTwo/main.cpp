#include <iostream>

int main() {
    int number1;
    int number2;

    std::cout << "Input first number : " << std::endl;
    std::cin >> number1;
    std::cout << "Input second number : " << std::endl;
    std::cin >> number2;

    std::cout << number1 << " x " << number2 << " = " << number1 * number2 << std::endl;
    return 0;

}