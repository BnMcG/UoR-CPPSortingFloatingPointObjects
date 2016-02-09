//
// Created by ben on 09/02/16.
//

#include "UoRSort.h"

namespace Sorting {

    /**
     * Default constructor
     */

    UoRSort::UoRSort(){
        this->list = std::vector<floatingpoint::UoRFloat>();
    }

    /**
     * Constructor with a list of items passed
     */

    UoRSort::UoRSort(std::vector<floatingpoint::UoRFloat> items) {
        this->list = items;
    }

    std::vector<floatingpoint::UoRFloat> UoRSort::getList() {
        return this->list;
    }

    void UoRSort::setList(std::vector<floatingpoint::UoRFloat> items) {
        this->list = items;
    }
}