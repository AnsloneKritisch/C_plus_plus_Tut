#include <iostream>

using namespace std;


class sum
{ 
    public:
    
    sum(int a , int b )
    {
        
        cout<<a+b ;
    }

};

int main()
{
    sum obj(10 , 20);
    
    return 0;
}
