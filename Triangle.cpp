// Rachel Crosley
// CS 372
// Assignment 5
// 4/20/18
// Triangle.cpp




#include "Triangle.hpp"
#include <cmath>
using std::endl;


Triangle::Triangle(double sidelength, int startx, int starty, std::string name) {
    _sidelength = sidelength;
    _width = sidelength;
    _height = sqrt(_sidelength*_sidelength - (_sidelength/2)*(_sidelength/2));
    _startx = startx;
    _starty = starty;
    _name = name;
}


void Triangle::getPost(std::ostringstream & stream) {
    stream << "%%Triangle" << endl;
    stream << "/" << _name << "{" << endl;
    stream << "/width {" << _width << " inch mul} def" << endl;
    stream << "/height {" << _height << " inch mul} def" << endl;
    stream << "gsave" << endl;
    stream << _startx << " inch " << _starty << " inch rmoveto" << endl;
    stream << "1 width 2 div 1 height rlineto" << endl;
    stream << "1 width 2 div -1 height rlineto" << endl;
    stream << "closepath" << endl;
    stream << "0 0.5 1 setrgbcolor" << endl;
    stream << "fill" << endl;
    stream << "grestore" << endl;
    stream << "stroke" << endl;
    stream << "}def" << endl;
    stream << endl;
    
}


















