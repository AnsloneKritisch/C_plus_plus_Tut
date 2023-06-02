#include <iostream>

using namespace std;

class bank
{
    private:
    int atmpin ;

    public:
    int acc ;

    void input()
    {
        atmpin = 9234 ;
        acc = 789456123 ;
    }

    void output()
    {
        cout << atmpin << '\n';
        cout << acc << '\n';
    }

};

int main()
{
    bank obj ;

    obj.input();

    obj.output();

    cout << obj.acc<< '\n';
    // cout << obj.atmpin << '\n';

    
    return 0;
}






















