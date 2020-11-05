//
// Created by kirill on 04.11.2020.
//

#ifndef EDITOR_CIRCLE_H
#define EDITOR_CIRCLE_H

#include "idrawablefigure.h"
#include "point.h"

class Circle: public IDrawablefigure
{
public:
    Circle(Point center, uint radius): _center(center), _radius(radius){}
    override void draw(Image &img){};
private:
    Point _center;
    uint _radius;
};

#endif //EDITOR_CIRCLE_H

