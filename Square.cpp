// Rachel Crosley
// CS 372
// Assignment 5
// 4/18/18
// Square.cpp


#include "Square.hpp"
using std::endl;



Square::Square(double width, int startx, int starty, std::string name) {
    _width = width;
    _height = width;
    _startx = startx;
    _starty = starty;
    _name = name;
}

double Square::getWidth() {
    return _width;
}

double Square::getHeight() {
    return _height;
}

std::string Square::getName() {
    return _name;
}

void Square::getPost(std::ostringstream & stream) {
    stream << "%Square" << endl;
    stream << "/" << getName() << "{" << endl;
    stream << "/width {" << getWidth() << " mul} def" << endl;
    stream << "/height {" << getHeight() << " mul} def" << endl;
    stream << "gsave" << endl;
    stream << "newpath" << endl;
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






















