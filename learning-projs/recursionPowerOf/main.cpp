#include <iostream>

double powerOf(double number, double toThePower, double count, double temp) { //increment count until it reaches to toThePower
    if (count != toThePower) {
        number *= temp;
        count++;
        powerOf(number, toThePower, count, temp);
    } else {
        std::cout << number << std::endl;
        return number;
    }
    return 0;
}


int main() {
    double number;
    double powerOfValue;
    double temp;
    double count = 1;

    std::cout << "Enter number : " << std::endl;
    std::cin >> number;
    std::cout << "What power of would you like the number to go to? " << std::endl;
    std::cin >> powerOfValue; 
    temp = number;

    powerOf(number, powerOfValue, count, temp);

}