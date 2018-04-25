// Rachel Crosley
// CS 372
// Assignment 5
// 4/20/18
// Polygon.hpp



#ifndef Polygon_hpp
#define Polygon_hpp
#include "Shape.h"

class Polygon : public Shape {
public:
    Polygon(double sidelength, int startx, int starty);
    void getPost(std::ostringstream & stream);
    
    
    
private:
    double _sidelength;
    double _width;
    double _height;
    int _startx;
    int _starty;
};


















#endif /* Polygon_hpp */
