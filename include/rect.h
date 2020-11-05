//
// Created by kirill on 04.11.2020.
//

#ifndef EDITOR_RECT_H
#define EDITOR_RECT_H

#include "idrawablefigure.h"
#include "point.h"


class Rect: public IDrawablefigure
{
public:
    Rect(Point center, uint w, uint h): _center(center), _w(w), _h(h){}
    override void draw(Image &img){};
private:
    Point _center;
    uint _w;
    uint _h;
};

#endif //EDITOR_RECT_H
