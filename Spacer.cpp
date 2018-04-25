// Rachel Crosley
// CS 372
// Assignment 5
// 4/20/18
// Spacer.cpp


#include "Spacer.hpp"
using std::endl;

Spacer::Spacer(double width, double height, int startx, int starty) {
    _width = width;
    _height = height;
    _startx = startx;
    _starty = starty;
}

void Spacer::getPost(std::ostringstream & stream) {
    stream << "%Spacer" << endl;
    stream << "/width {" << _width << " mul} def" << endl;
    stream << "/height {" << _height << " mul} def" << endl;
    stream << "/spacer{" << endl;
    stream << _startx+_width << " inch " << _starty+_height << " inch rmoveto" << endl;
    stream << "}def" << endl << endl;
    
    
}












