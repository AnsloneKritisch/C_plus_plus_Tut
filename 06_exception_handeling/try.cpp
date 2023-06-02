#include <iostream>
using namespace std;

int main()
{

    try
    {
        int age = 15 ;
        if (age >= 18)
        {
            cout <<" You are allowed " ;
        }

        else
        {
            throw(age);
        }
        
    }

    catch (int num)
    {
        cout << " You are not allowed as your age is " << num ;


    }
    
    return 0;
}
