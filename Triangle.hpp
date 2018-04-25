// Rachel Crosley
// CS 372
// Assignment 5
// 4/20/18
// Triangle.hpp



#ifndef Triangle_hpp
#define Triangle_hpp

#include "Shape.h"

class Triangle : public Shape {
public:
    Triangle(double sidelength, int startx, int starty, std::string name);
    void getPost(std::ostringstream & stream);
    
    
    
private:
    double _sidelength;
    double _width;
    double _height;
    int _startx;
    int _starty;
    std::string _name;
};









#endif /* Triangle_hpp */
