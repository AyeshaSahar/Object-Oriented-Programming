#include <iostream>

using namespace std;

class Rectangle {
  public:
    int l;
    int b;

    Rectangle(int len, int brth) : l(len), b(brth) {}

    int Area() {
      return l * b;
    }
};

int main() {
  Rectangle rect(8, 6);

  cout << "Area = " << rect.Area();

  return 0;
}