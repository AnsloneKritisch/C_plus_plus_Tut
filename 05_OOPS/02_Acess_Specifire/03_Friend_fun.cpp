#include <iostream>

using namespace std;

class MyClass
{ 
   private:
    int PV = 50;

   public:
//    declare 
    friend void display(const MyClass& obj);

};

void display(const MyClass& obj)
{
    cout << "The private variable is: " << obj.PV << endl;
}

int main()
{
    MyClass ob;

    display(ob);

    return 0;
}
