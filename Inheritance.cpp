#include <iostream>
#include <string>

using namespace std;

class Cat {
  public: 
    void says() {
      cout << "Meow, meow! \n" ;
    }
};

class MaineCoon : public Cat {};


int main() {
    Cat Mycat;
    Mycat.says();
    
    MaineCoon cat1;
    cat1.says();

    return 0;
}



