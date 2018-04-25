// Rachel Crosley
// CS 372
// Assignment 5
// 4/18/18
// Square.hpp


#ifndef Square_hpp
#define Square_hpp

#include <stdio.h>
#include "Shape.h"


class Square : public Shape {
public:
    Square(double width, int startx, int starty, std::string name);
    void getPost(std::ostringstream & stream);
    double getWidth();
    double getHeight();
    std::string getName();
    
private:
    double _width;
    double _height;
    int _startx;
    int _starty;
    std::string _name;
};












#endif /* Square_hpp */
