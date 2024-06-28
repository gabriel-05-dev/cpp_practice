#include <iostream>

int main() {
    int input_a;
    int input_b;
    int temp;

    std::cout << "enter first number to swap : " << std::endl;
    std::cin >> input_a;
    std::cout << "enter first number to swap : " << std::endl;
    std::cin >> input_b;

    std::cout << "Before swapping --> " << input_a << " : " << input_b << std::endl;

    //swap num

    temp = input_a;
    input_a = input_b;
    input_b = temp;

    std::cout << "After swapping --> " << input_a << " : " << input_b << std::endl;
    return 0;


}