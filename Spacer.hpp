// Rachel Crosley
// CS 372
// Assignment 5
// 4/20/18
// Spacer.hpp


#ifndef Spacer_hpp
#define Spacer_hpp

#include "Shape.h"

class Spacer : public Shape {
public:
    Spacer(double width, double height, int startx, int starty);
    void getPost(std::ostringstream & stream);
    
    
    
private:
    double _width;
    double _height;
    int _startx;
    int _starty;
};












#endif /* Spacer_hpp */
