#include <iostream>
#include <conio.h>
using namespace std ;

#define n "\n \n"

 int main()
 {

    int a , b , c ;

    cout<<"Enter 1st number : ";
    cin>>a ;
    
    cout<<"Enter 2nd number : ";
    cin>>b ;

    c = a + b ;

    cout<<"Sum of a and b is "<<c;
    cout<<n;

    
    c = a - b ;

    cout<<"Substraction of a and b is "<<c;
    cout<<n;


    
    c = a * b ;

    cout<<"Multiplication of a and b is "<<c;
    cout<<n;


    c = a / b ;

    cout<<"Division of a and b is "<<c;
    cout<<n;


    c = a % b ;

    cout<<"Remainder of a and b is "<<c;
    cout<<n;


    

    getch();
    return 0;
 }
 