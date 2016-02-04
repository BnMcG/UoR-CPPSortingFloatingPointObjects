//
// Created by ben on 04/02/16.
//

#ifndef UOR_CPPSORTINGFLOATINGPOINTOBJECTS_MENU_H
#define UOR_CPPSORTINGFLOATINGPOINTOBJECTS_MENU_H

#include <vector>

class Menu {
public:
    Menu();
    void viewData();
    void setData();
    void loadSampleDataOne();
    void loadSampleDataTwo();
    void loadSampleDataThree();
private:
    std::vector<float> list;
};


#endif //UOR_CPPSORTINGFLOATINGPOINTOBJECTS_MENU_H
