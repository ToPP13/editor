//
// Created by kirill on 04.11.2020.
//

#ifndef EDITOR_IDRAWABLEFIGURE_H
#define EDITOR_IDRAWABLEFIGURE_H

#include "image.h"

class IDrawablefigure
{
public:
    IDrawablefigure(){}
    virtual void draw(Image &img) = 0;
};

#endif //EDITOR_IDRAWABLEFIGURE_H
