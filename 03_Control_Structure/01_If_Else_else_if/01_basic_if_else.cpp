#include <iostream>
#include <conio.h>

using namespace std ;

int main()
{
    int a , b ;

    cout<<"Enter First number : ";
    cin>>a ;

    cout<<"Enter Second number : ";
    cin>>b ;

    if (a>b)
    {
        cout<<a<<" is Greater Than "<<b;
    }

    else
    {
        cout<<b<<" is greater then "<<a;
    }

    getch();
    return 0;
    


}