#include <iostream>

using namespace std;

void reverse(int n)
{
    int rem , rev = 0;
    for (; n >0 ; )
    {
        rem = n % 10; // 3
        rev = rev * 10 + rem; // 0 x 10 + 3
        n = n / 10; // 12
    }

    cout << rev;
    
}
int main()
{
    int a ;

    cout << "Enter a number : ";
    cin >> a;

    reverse(a);
    return 0;
}
