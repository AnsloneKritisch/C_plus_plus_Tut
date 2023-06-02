#include <iostream>
#include <string>

using namespace std;

class stud
{
    public:
     int a ;

     void no()
     {
        cout << a ;
     }

     int x ;
     int y ;

     void sum()
     {
        cout << x+y;

     }
};



void sum()
{
    cout << 20+30;
}





int main()
{
    stud obj ;

    obj.a = 1000000 ;

    obj.no() ;

    obj.x = 10 ;
    obj.y = 20 ;

    obj.sum() ;

    sum();


    
    return 0;
}
