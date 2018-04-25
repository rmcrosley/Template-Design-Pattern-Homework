// Rachel Crosley
// CS 372
// Assignment 5
// 4/18/18
// Shape.h


#ifndef Shape_h
#define Shape_h

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using std::string;


class Shape{
public:
    
    
    void rotate(int degree, std::ostringstream & stream, std::string name);
    void scale(double width, double height, std::ostringstream & stream, std::string name);
    void stackHorizontal( std::ostringstream & stream, std::string name, double width);
    void stackVertical(std::ostringstream & stream, std::string name, double height);
    void layered(std::ostringstream & stream, std::string name);

    
private:
    double _width;
    double _height;
    int _startx;
    int _starty;
};
#endif /* Shape_h */
