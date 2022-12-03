#include <iostream>
#include <conio.h>

using namespace std ;

int main()
{
    int i ;

    for(i = 10 ;  i > 0 ; i--)
    {
        cout<<i<<"," ;
        if(i == 3)
        {
            cout<<"Countdown Aborted !";
            break;
        }
    }

    getch();
    return 0 ;
    
}