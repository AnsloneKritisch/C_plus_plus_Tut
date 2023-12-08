
#include <iostream>

using namespace std; 

class Operation
{
public:
    
    int perform(int a, int b)
    {
        return a + b;
    }

};

class Addition : public Operation
{
   
};

int main()
{
   
    Addition obj;
  
    int result = obj.perform(5, 3);

    cout << "Result of adding 5 and 3: " << result << endl;

    return 0;
}
