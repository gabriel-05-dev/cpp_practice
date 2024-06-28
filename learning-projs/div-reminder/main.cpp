#include <iostream>

int main() {

    int divisor;
    int dividend;
    int quotient;
    int remainder;
    std::cout << "Program to find reminader & quotient."  << std::endl;
    std::cout << "Input dividend : " << std::endl;
    std::cin >> dividend;
    std::cout << "Input divisor : " << std::endl;
    std::cin >> divisor;
    std::cout << "The quotient is : " << dividend/divisor << std::endl;
    std::cout << "The remainder is : " << dividend % divisor << std::endl;
    return 0;
}