#include "Triangle.hpp"
#include <cmath>
#include "Line.hpp"
#include "Point.hpp"

Triangle::Triangle(Point pa, Point pb, Point pc) : p1(pa), p2(pb), p3(pc){}

  double Triangle::area(){
    Line side1(p1, p2);
    Line side2(p2, p3);
    Line side3(p3, p1);
    double s = (side1.length() + side2.length() + side3.length());
    return std::pow(s*(s-side1.length())*(s-side2.length())*(s-side3.length()), 0.5);
  }
