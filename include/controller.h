//
// Created by kirill on 04.11.2020.
//

#ifndef EDITOR_CONTROLLER_H
#define EDITOR_CONTROLLER_H

#include "model.h"

class Controller
{
public:
    Controller(Model *model)
    {
        _model = model;
    }
    void run(){};
private:
    Model *_model;
};

#endif //EDITOR_CONTROLLER_H
