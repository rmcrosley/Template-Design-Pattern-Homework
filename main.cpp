// Rachel Crosley
// CS 372
// Assignment 5
// 4/18/18
// main.cpp

#include <iostream>
#include "Shape.h"
#include "Square.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Spacer.hpp"
#include "Triangle.hpp"
#include <vector>

using std::ofstream;
using std::endl;
using std::cout;
using std::ostringstream;
using std::vector;


void intro(ostringstream & stream) {
    stream << "%!" << endl;
    stream << "% Rachel's PostScript" << endl << endl;
    stream << "/inch {72 mul} def" << endl;
    stream << "0 inch 0 inch moveto" << endl;
    stream << endl;
}




int main() {
    ostringstream stream;
    
    ofstream post_stream("rachel.ps");
    if (!post_stream.is_open()) {
        cout << "poop" << endl;
        return 0;
    }
    intro(stream);
    
    Square s(1, 1, 1, "s");
    s.getPost(stream);

    Circle p(1, 3, 3, "p");
    p.getPost(stream);
    
    Triangle e(1, 4, 4, "e");
    e.getPost(stream);
    
    
    stream << "e" << endl;
    stream << "p" << endl;
    stream << "s" << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    stream << "showpage" << endl;
    post_stream << stream.str();
    post_stream.close();
    
    
    return 0;
}
