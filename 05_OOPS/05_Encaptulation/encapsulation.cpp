#include <iostream>

using namespace std;

class Calculator
{
private:
    int add(int a, int b)
    {
        return a + b;
    }

public:
    int addop(int a, int b)

    {
        return add(a, b);
    }
};

int main()
{
    // Instantiate a Calculator object
    Calculator calculator;

    // Add two numbers using the Calculator object
    int result = calculator.addop(5, 3);

    // Display the result
    cout << "Result of adding 5 and 3: " << result << endl;

    return 0;
}
