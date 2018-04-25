// Rachel Crosley
// CS 372
// Assignment 5
// 4/20/18
// Rectangle.hpp



#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double width, double height, int startx, int starty);
    void getPost(std::ostringstream & stream);
    
    
    
private:
    double _width;
    double _height;
    int _startx;
    int _starty;
};






















#endif /* Rectangle_hpp */
