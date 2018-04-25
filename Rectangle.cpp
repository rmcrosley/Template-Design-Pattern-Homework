// Rachel Crosley
// CS 372
// Assignment 5
// 4/20/18
// Rectangle.cpp


#include "Rectangle.hpp"
using std::endl;

Rectangle::Rectangle(double width, double height, int startx, int starty) {
    _width = width;
    _height = height;
    _startx = startx;
    _starty = starty;
}

void Rectangle::getPost(std::ostringstream & stream) {
    stream << "%Rectangle" << endl;
    stream << "/width {" << _width << " mul} def" << endl;
    stream << "/height {" << _height << " mul} def" << endl;
    stream << "/rectangle{" << endl;
    stream << "gsave" << endl;
    stream << _startx << " inch " << _starty << " inch rmoveto" << endl;
    stream << "1 inch width 0 inch height rlineto" << endl;
    stream << "0 inch width 1 inch height rlineto" << endl;
    stream << "-1 inch width 0 inch height rlineto" << endl;
    stream << "closepath" << endl;
    stream << "1 0.5 0.5 setrgbcolor" << endl;
    stream << "fill" << endl;
    stream << "grestore" << endl;
    stream << "stroke" << endl;
    stream << "}def" << endl << endl;
    
    
}

























