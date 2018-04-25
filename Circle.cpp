// Rachel Crosley
// CS 372
// Assignment 5
// 4/20/18
// Circle.cpp


#include "Circle.hpp"
using std::endl;

Circle::Circle(double radius, int startx, int starty, std::string name) {
    _width = radius * 2;
    _height = radius * 2;
    _startx = startx;
    _starty = starty;
    _name = name;
}

double Circle::getWidth() {
    return _width;
}

double Circle::getHeight() {
    return _height;
}

void Circle::getPost(std::ostringstream & stream) {
    stream << "%Circle" << endl;
    stream << "/" << _name << "{" << endl;
    stream << "/width {" << _width << " mul} def" << endl;
    stream << "/height {" << _height << " mul} def" << endl;
    stream << (_startx+_width)/2 << " inch " << (_starty+_width)/2 << " inch " << _width/2 << " inch 0 360 arc" << endl;
    stream << "0 1 0.5 setrgbcolor fill" << endl;
    stream << "stroke" << endl;
    stream << "}def" << endl << endl;
    
    
}


















