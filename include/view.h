//
// Created by kirill on 04.11.2020.
//

#ifndef EDITOR_VIEW_H
#define EDITOR_VIEW_H

#include "observer.h"
#include "model.h"

class View: public Observer
{
public:
    View(Model *model)
    {
        _model = model;
        _model->addObserver(this);
    }
    void draw()
    {
        Image image_to_draw = _img.getImageCopy();
        auto primitives = _model->getPrimitives();
//        for (auto it=primitives.begin(); it!=primitives.end();it++)
//        {
//            *it.
//            *it->draw(image_to_draw);
//        }
        show(image_to_draw);
    }
    void show(const Image & img);
    virtual void update(){};
private:
    Image _img;
    Model *_model;
};

#endif //EDITOR_VIEW_H
