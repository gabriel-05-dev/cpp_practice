#include <iostream>

int sumOf(int start, int end, int sum = 0) {
    if (start != end + 1) {
        sum += start;
        start++;
        sumOf(start, end, sum);
    } else {
        std::cout << sum << std::endl;
        return sum;
    }
    return 0;
}

int main() {
    
}