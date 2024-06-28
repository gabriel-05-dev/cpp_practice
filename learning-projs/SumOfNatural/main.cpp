#include <iostream>

int sumOf(int start, int end, int sum = 0) {
    if (start != end + 1) {
        sum += start;
        start++;
        sumOf(start, end, sum);
    } else {
    std::cout << sum << std::endl;
    }
    return 0; //successful
}

int main() {
    int num_1;
    int num_2;

    std::cout << "Enter start : " << std::endl;
    std::cin >> num_1;
    std::cout << "Enter end : " << std::endl;
    std::cin >> num_2;
    
    std::cout << "The sum of numbers from " << num_1 << " to " << num_2 << " is " << sumOf(num_1, num_2) << std::endl;
    return 0;
}