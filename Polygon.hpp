#pragma once
#include "Point.hpp"
#include "Line.hpp"
#include "Triangle.hpp"
#include <vector>

class Polygon{
  private:
    std::vector<Point> p;
  public:
    Polygon(std::vector<Point>);
    double area();
    double perimeter();
};