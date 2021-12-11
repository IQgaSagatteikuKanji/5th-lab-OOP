#pragma once
#include "vector.h"

class Body{
    Vector_3D central_point;

public:
    bool move_to(const Vector_3D&);
    bool move_by(const Vector_3D&);
    Vector_3D get_radius_vector();

    virtual double get_volume() = 0;
    virtual double get_surface_area() = 0;
};

bool Body::move_by(const Vector_3D& movement){
    central_point = central_point + movement;
    return false; //in case of future collision
};

bool Body::move_to(const Vector_3D& new_location){
    central_point = new_location;
    return false;
};

Vector_3D Body::get_radius_vector(){
    return central_point;
}