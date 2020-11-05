//
// Created by kirill on 04.11.2020.
//

#ifndef EDITOR_MODEL_H
#define EDITOR_MODEL_H

#include "algorithm"
#include "vector"
#include "observable.h"
#include "idrawablefigure.h"
#include "image.h"

class Model : public Observable
{
public:
    Model(){}
    void addElem(IDrawablefigure * primitive)
    {
        _primitives.push_back(primitive);
        notifyUpdate();
    }
    void deleteElem(IDrawablefigure * primitive)
    {
        auto pos =  std::find(_primitives.begin(), _primitives.end(), primitive);
        _primitives.erase(pos);
        notifyUpdate();
    }
    std::vector<IDrawablefigure*> getPrimitives()
    {
        std::vector<IDrawablefigure*> primitives;
        std::copy(_primitives.begin(), _primitives.end(), std::back_inserter(primitives));
        return primitives;
    }
private:
    std::vector<IDrawablefigure*> _primitives;
};


#endif //EDITOR_MODEL_H
