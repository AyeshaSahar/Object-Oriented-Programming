#include <iostream>
  
using namespace std;

class Numbers{
    public:
      
    void num(int a)
    {
        cout << "The value of a is " << a << endl;
    }
      
    void num(double a)
    {
        cout << "The value of a is " << a << endl;
    }
      
    void num(int a, int b)
    {
        cout << "The value of a and b is " << a << ", " << b << endl;
    }
};
  
int main() {
      
    Numbers object;
      
    object.num(33,72);

    object.num(6);
      
    object.num(3.142);
      
    return 0;
} 