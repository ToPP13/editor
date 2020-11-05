//
// Created by kirill on 04.11.2020.
//

#ifndef EDITOR_OBSERVABLE_H
#define EDITOR_OBSERVABLE_H

#include "vector"

#include "observer.h"

class Observable
{
public:
    void addObserver(Observer *observer)
    {
        _observers.push_back(observer);
    }
    void notifyUpdate()
    {
        int size = _observers.size();
        for (int i = 0; i < size; i++)
        {
            _observers[i]->update();
        }
    }
private:
    std::vector<Observer*> _observers;
};

#endif //EDITOR_OBSERVABLE_H
