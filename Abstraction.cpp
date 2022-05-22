#include <iostream>

using namespace std;

class displayNumbers{
    private:
        int a, b;
  
    public:
      
        void setValues(int x, int y)
        {
            a = x;
            b = y;
        }
          
        void display()
        {
            cout<<"a = " <<a << endl;
            cout<<"b = " << b << endl;
        }
};
  
int main() 
{
    displayNumbers object;

    object.setValues(7, 99);
    object.display();
    
    return 0;
}