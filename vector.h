#pragma once
#include <cmath>

class Vector_3D{
public:
    double x = 0, y = 0, z = 0;
    double dot_product(const Vector_3D &);
    Vector_3D cross_product(const Vector_3D &);
    //double triple_product(const Vector_3D&, const Vector_3D&);
    double norm();
    Vector_3D operator+(const Vector_3D&);
    Vector_3D(double _x, double _y, double _z):x(_x),y(_y),z(_z){};
    Vector_3D(){};
};

double Vector_3D::dot_product(const Vector_3D &second){
    return x * second.x + y * second.y + z * second.z;
};


double Vector_3D::norm(){
    return sqrt(dot_product(*this));
}


Vector_3D Vector_3D::cross_product(const Vector_3D &second){
    Vector_3D result;
    result.x = y * second.z - z * second.y;
    result.y = - x * second.z + second.x * z;
    result.z = x * second.y - second.x * y;
    return result; 
}
Vector_3D Vector_3D::operator+(const Vector_3D& second){
    Vector_3D result;
    result.x = x + second.x;
    result.y = y+second.y;
    result.z = z+second.z;
    return result;
}
