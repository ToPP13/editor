//
// Created by kirill on 04.11.2020.
//

#ifndef EDITOR_TRIANGLE_H
#define EDITOR_TRIANGLE_H

#include "idrawablefigure.h"
#include "point.h"

class Triangle: public IDrawablefigure
{
public:
    Triangle(Point p1, Point p2, Point p3): _p1(p1), _p2(p2), _p3(p3){}
    override void draw(Image &img){};
private:
    Point _p1;
    Point _p2;
    Point _p3;
};

#endif //EDITOR_TRIANGLE_H
