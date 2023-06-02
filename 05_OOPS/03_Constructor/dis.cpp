#include <iostream>

using namespace std;

int c = 0;

class A
{
    public:
    A()
    {
        // cout << " Object Created " ;
        cout << ++c;

    }

    ~A()
    {
        // cout << " Object Deleted " ;
        cout << --c;
    }




} ;

 



int main()
{
    A obj;
    
    return 0;
}
