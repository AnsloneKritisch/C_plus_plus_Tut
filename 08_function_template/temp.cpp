#include <iostream>

using namespace std; // using directive to avoid repeating std:: in the code

// Function template for adding two numbers
template <typename T>
T SUM(T a, T b) {
    return a + b;
}

int main() {
    // Example with integers
    int resultInt = SUM(5, 3);
    cout << "Sum of integers: " << resultInt << endl;

    // Example with floating-point numbers
    double resultDouble = SUM(3.5, 2.5);
    cout << "Sum of doubles: " << resultDouble << endl;


    return 0;
}
