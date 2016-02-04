//
// Created by ben on 04/02/16.
//

#include <iostream>
#include "BubbleSort.h"

namespace Sorting {
    std::vector<float> BubbleSort::sort() {

        for(auto num : list) {
            std::cout << num << std::endl;
        }

        return list;

    }
}