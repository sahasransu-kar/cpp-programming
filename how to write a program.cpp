#include <iostream>
class Rectangle
{
private:
  int length;
  int breadth;
public:
  void initialize (int l, int b)
  {
    length = l;
    breadth = b;
  }

  int area ()
  {
    return length * breadth;
  }

  void changeLength (int l)
  {
    length = l;
  }
};

int main ()
{
  int a, b, c;
  std::cin >> b >> c;
  Rectangle r;
  r.initialize (b, c);
  a = r.area ();
  std::cout << a;
  r.changeLength (20);
  return 0;
}
