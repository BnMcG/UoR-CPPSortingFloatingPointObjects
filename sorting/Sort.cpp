//
// Created by ben on 04/02/16.
//

#include "Sort.h"

namespace Sorting {

    /**
     * Default constructor
     */

    Sort::Sort() {
        this->list = std::vector<float>();
    }

    /**
     * Constructor with a list of items passed
     */

    Sort::Sort(std::vector<float> items) {
        this->list = items;
    }

    std::vector<float> Sort::getList() {
        return this->list;
    }

    void Sort::setList(std::vector<float> items) {
        this->list = items;
    }
}