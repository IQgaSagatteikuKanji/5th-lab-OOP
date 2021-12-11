#pragma once
#include "vector.h"
#include "Body.h"
#include <cmath>


class Sphere: public Body{
    double radius =0.0;
public:
    bool set_radius(double );
    double get_radius();

    double get_volume() final;
    double get_surface_area() final;
};

bool Sphere::set_radius(double new_radius){
    radius = new_radius;
    return false;
};

double Sphere::get_radius(){
    return radius;
}

double Sphere::get_volume(){
    return 4.0/3.0 * M_PI * pow(radius,3.0);
}

double Sphere::get_surface_area(){
    return 4.0 * M_PI * pow(radius, 2.0);
}