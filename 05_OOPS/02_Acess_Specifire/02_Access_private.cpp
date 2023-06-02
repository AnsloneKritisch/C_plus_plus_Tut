// private attribute, use public "get" and "set" methods

#include <iostream>

using namespace std;

class show
{ 
    //private 

    int x ;

    public:

    // set
    void di (int a)
    {
        x = a;
    }
    

    // get
    int gdi()
    {
        return x;

    }
    
   
  
};



int main()
{

    show obj ;

    obj.di(200);

    int ds = obj.gdi();

    cout << ds;

    cout << obj.gdi();

  




  
    
    return 0;
}