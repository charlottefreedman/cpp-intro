#include <iostream>
#include "math.h"
#include <vector>

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

class Point{
  public: 
    double x;
    double y;

  double distance_to_origin(double x, double y){
    return sqrt(pow((x - 0), 2) + pow((y - 0), 2));
  }

  double distance_to_point(Point p){
    return sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
  }
};

class Line{
  public:
    Point p1;
    Point p2;

  double length(Point p1, Point p2){
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
  }

  double distance_to_point(Point p1, Point p2, Point p){
    return (abs(((p2.x-p1.x)*(p1.y, p.y)) - ((p1.x - p.x)*(p2.y - p1.y))))/ (sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2)));
  }
  
};

class Triangle{
  public:
    Point p1;
    Point p2;
    Point p3;

  double area(Point p1, Point p2, Point p3){
    Line l;
    double base = l.length(p2, p3);
    double height = l.distance_to_point(p2, p3, p1);
    return divide(multiply(base, height), 2);
  }
};

class Polygon{
  public:
    std::vector<Point> p;

  double area(){
    int amt_of_points = p.size();
    double area = 0.0;
    for (int i = 0; i < amt_of_points -2 ; i++){
      Triangle t;
      area += t.area(p[0],p[i], p[i+1]);
    }
    return area;
  }

  double perimeter(){
    int amt_of_points = p.size();
    double perimeter = 0.0;
    Line ll;
    for (int i = 0; i < amt_of_points; i++){
      perimeter += ll.length(p[i], p[i+1]);
    }
    perimeter += ll.length(p[amt_of_points - 1], p[0]);
    return perimeter;
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