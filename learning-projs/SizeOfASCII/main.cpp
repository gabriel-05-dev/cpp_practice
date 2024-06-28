#include <iostream>

int main() {
    char input;
    int size;

    std::cout << "Input variable to find ASCII Value : " << std::endl;
    std::cin >> input;
    size = input;

    std::cout << "The value of the letter " << input << " in ASCII is : " << size << std::endl;
    return 0;
}