#pragma once
#include "Point.hpp"
#include "Line.hpp"

class Triangle{
  private:
    Point p1;
    Point p2;
    Point p3;
  public:
    Triangle(Point, Point, Point);
    double area();
    Point p1;
    Point p2;
    Point p3;
};