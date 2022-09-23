/*
\a - Bell (beep)
\b - Backspace
\f - Formatted
\n - Newline or line feed
*/


#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout<<"Hello \n world" ;
    cout<<"\n Hello \t world" ;
    cout<<"\n Hello\bworld" ;
    cout<<"\n Hello\fworld" ;
    cout<<"\n Hello\aworld" ;
    
    return 0;
}
