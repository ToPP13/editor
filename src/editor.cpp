#ifndef __PRETTY_FUNCTION__
#include "pretty.h"
#endif

#include <iostream>
#include <vector>
#include <map>

#include "../include/model.h"
#include "../include/view.h"
#include "../include/controller.h"




int main(int, char *[]) {

    Model model;
    View window(&model);
    Controller controller(&model);
    controller.run();
    return 0;
}
