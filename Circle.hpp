// Rachel Crosley
// CS 372
// Assignment 5
// 4/20/18
// Circle.hpp


#ifndef Circle_hpp
#define Circle_hpp
#include "Shape.h"


class Circle : public Shape {
public:
    Circle(double radius, int startx, int starty, std::string name );
    void getPost(std::ostringstream & stream);
    double getWidth();
    double getHeight();
    
    
private:
    double _width;
    double _height;
    int _startx;
    int _starty;
    std::string _name;
};

















#endif /* Circle_hpp */
