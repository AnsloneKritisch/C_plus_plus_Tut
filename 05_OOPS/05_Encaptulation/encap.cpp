#include <iostream>

using namespace std; 

class emp 
{
    private:
    int  sal;

    public:
    void set(int s )
    {
        sal = s;
    }

    int get()
    {
        return sal ;
    }



};

int main( ) 
{
    emp  obj ;

    obj.set(12);

    cout <<obj.get() ;

    // cout<< obj.sal ;

    return 0;
}
