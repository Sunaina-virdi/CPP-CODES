#include <iostream>
#include <cmath>


class Prime {
public:
    // Function to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) {
            return false; // Numbers less than or equal to 1 are not prime
        }

        int sqrtNum = static_cast<int>(std::sqrt(num));

        for (int i = 2; i <= sqrtNum; ++i) {
            if (num % i == 0) {
                return false; // Found a factor, so the number is not prime
            }
        }

        return true; // If no factors were found, the number is prime
    }
};

int main() {
    // Example usage
    Prime primeChecker;

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (primeChecker.isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}
