#include "Line.hpp"
#include <cmath>

Line::Line(Point pa, Point pb) : p1(pa), p2(pb){}

  double Line::length(){
    return this->p1.distance_to_point(p2);
  }

  double Line::distance_to_point(Point p){
    return (abs(((p2.x()-p1.x())*(p1.y(), p.y())) - ((p1.x() - p.x())*(p2.y() - p1.y()))))/ (sqrt(pow((p1.x() - p2.x()), 2) + pow((p1.y() - p2.y()), 2)));
  }
