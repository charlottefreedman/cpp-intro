#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include "Triangle.hpp"
#include "Polygon.hpp"
#include "AUV.hpp"
#include "math.h"
#include <vector>
#include <array>

int add(int x, int y){
  return x + y;
}

int subtract(int x, int y){
  return x - y;
}

int multiply(int x, int y){
  return x * y;
}

int divide(int x, int y){
  return x / y;
}

class Rectangle
{
public:
  int width;
  int height;

  int area()
  {
    return width * height;
  }
};

class Circle
{
private:
  int radius;

public: Circle(int radius){
  this->radius = radius;
}
int area(int radius)
{
  return M_PI*pow(radius, 2);
}
void print() {
  std::cout << "The area of the circle with a radius of " << radius << " is " << area(radius) << std::endl;
  }
};

int main()
{
  std::cout << "Charlotte Freedman, 115" << std::endl;

  int x = 5;
  int y = 7;
  int z = add(x, y);
  std::cout << "The sum of " << x << " and " << y << " is " << z << std::endl;
  std::cout << "The sum of " << x << " and " << y << " is " << x + y << std::endl;

  int w = multiply(multiply(x, y), z);
  std::cout << "The product of " << x << ", " << y << ", and " << z << " is " << w << std::endl;
  std::cout << "The product of " << x << ", " << y << ", and " << x + y << " is " << x * y * (x + y) << std::endl;
  
  int v = divide(x, y);
  std::cout << "The quotient of " << x << " and " << y << " is " << v << std::endl;
  std::cout << "The quotient of " << x << " and " << y << " is " << x/y << std::endl;

  Circle c(2);
  c.print();

  return 0;
}