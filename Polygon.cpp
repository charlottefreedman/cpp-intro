#include "Triangle.hpp"
#include <cmath>
#include "Line.hpp"
#include "Polygon.hpp"
#include "Point.hpp"
#include <vector>

Polygon::Polygon(std::vector<Point> p){
  this-> p = p;
}

  double Polygon::area(){
    int amt_of_points = p.size();
    double area = 0.0;
    for (int i = 0; i < amt_of_points -2 ; i++){
      Triangle t = Triangle(p[0], p[i], p[i+1]);
      area += t.area();
    }
    return area;
  }
  double Polygon::perimeter(){
    int amt_of_points = p.size();
    double perimeter = 0.0;
    for (int i = 0; i < amt_of_points-1; i++){
      perimeter += p[i].distance_to_point(p[i+1]);
    }
    perimeter += p[amt_of_points - 1].distance_to_point(p[0]);
    return perimeter;
  }
