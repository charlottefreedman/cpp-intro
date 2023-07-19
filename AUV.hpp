#pragma once
#include "Point.hpp"
#include "Line.hpp"
#include "Triangle.hpp"
#include <vector>
#include <array>
#include <string>

class AUV{
    private:
        std::string name;
        Point position;
        double depth;
        double heading;
        std::array<double, 3> speed;
        double angular_speed;
    public:
    AUV(std::string&, Point&, double&, double&, std::array<double, 3>&, double&){};
    void step(const double&);
    void apply_acceleration(std::array<double, 3>&, const double&);
    void apply_angular_acceleration(double&, const double&);
};