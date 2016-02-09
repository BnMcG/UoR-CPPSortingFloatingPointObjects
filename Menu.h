//
// Created by ben on 04/02/16.
//

#ifndef UOR_CPPSORTINGFLOATINGPOINTOBJECTS_MENU_H
#define UOR_CPPSORTINGFLOATINGPOINTOBJECTS_MENU_H

#include <vector>
#include "floatingpoint/UoRFloat.h"

class Menu {
public:
    Menu();
    void viewData();
    void setData();
    void loadSampleDataOne();
    void loadSampleDataTwo();
    void loadSampleDataThree();
private:
    std::vector<floatingpoint::UoRFloat> uflist;
};


#endif //UOR_CPPSORTINGFLOATINGPOINTOBJECTS_MENU_H
