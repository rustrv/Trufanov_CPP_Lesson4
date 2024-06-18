#include <iostream>
#include <vector>

std::vector<int> generateFibonacci(int n) {
    std::vector<int> fibonacci(n);
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2; i < n; ++i) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    return fibonacci;
}

int main() {
    int n = 5;
    std::vector<int> fibonacci = generateFibonacci(n);
    std::cout << "First " << n << " Fibonacci numbers: ";
    for (int number : fibonacci) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    return 0;
}
