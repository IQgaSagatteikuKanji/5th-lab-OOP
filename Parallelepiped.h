#pragma once
#include "vector.h"
#include "Body.h"


class Parallelepiped: public Body{
    Vector_3D   first_edge,
                second_edge,
                third_edge;
public:
    Vector_3D get_first_edge();
    Vector_3D get_second_edge();
    Vector_3D get_third_edge();

    bool set_first_edge(const Vector_3D&);
    bool set_second_edge(const Vector_3D&);
    bool set_third_edge(const Vector_3D&);

    virtual double get_volume();
    virtual double get_surface_area();
};

Vector_3D Parallelepiped::get_first_edge(){
    return first_edge;
}

Vector_3D Parallelepiped::get_second_edge(){
    return second_edge;
}

Vector_3D Parallelepiped::get_third_edge(){
    return third_edge;
}

bool Parallelepiped::set_first_edge(const Vector_3D& new_edge){
    first_edge = new_edge;
    return false;
}

bool Parallelepiped::set_second_edge(const Vector_3D& new_edge){
    second_edge = new_edge;
    return false;
}

bool Parallelepiped::set_third_edge(const Vector_3D& new_edge){
    third_edge = new_edge;
    return false;
}

double Parallelepiped::get_volume(){
    double result = first_edge.cross_product(second_edge).dot_product(third_edge);
    return result >= 0.0 ? result : result*(-1.0);
}

double Parallelepiped::get_surface_area(){
    return 2.0 * (  first_edge.cross_product(second_edge).norm() + 
                    first_edge.cross_product(third_edge).norm() + 
                    second_edge.cross_product(third_edge).norm());
}