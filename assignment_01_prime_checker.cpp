// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 1
// =============================================================================
//
//  
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST implement the logic inside a function (see scaffold below).
// - Numbers less than 2 are NOT prime — handle this inside the function.
// - The main() function must call isPrime() and print the result.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is NOT a prime number." << endl;
    }

    return 0;
}

bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }

    for (int divisor = 2; divisor * divisor <= number; ++divisor)
    {
        if (number % divisor == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is NOT a prime number." << endl;
    }

    return 0;
}

