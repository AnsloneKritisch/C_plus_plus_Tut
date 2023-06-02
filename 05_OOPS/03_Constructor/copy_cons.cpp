#include <iostream>

using namespace std;


class A
{
    public:
     
     int data;

     A(int value) 
     {
        data = value;

     }

     A( A& copy)
     {
        cout << "copy";
        data = copy.data;
     }

    
} ;






int main()
{
    
    A obj1(10) ;

    A obj2 = obj1 ;

    cout << obj2.data ;


    return 0;
}



