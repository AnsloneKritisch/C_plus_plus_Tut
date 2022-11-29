#include <iostream>
#include <conio.h>

using namespace std ;

int main()
{
    int a , b ;

    cout<<"Enter first Number :";
    cin>>a;
    
    cout<<"Enter second Number :";
    cin>>b;

    if (a>b)
    {
        cout<<a<<" is greater than "<<b ;
    }

    else if(a==b)
    {
        cout<<a<<" is equal to "<<b ;
    }

    else
    {
        cout<<a<<" is greater than "<<b ;
    }
    

    getch();
    return 0;
}
