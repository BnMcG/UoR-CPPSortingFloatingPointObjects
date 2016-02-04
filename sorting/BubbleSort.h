//
// Created by ben on 04/02/16.
//

#ifndef UOR_CPPSORTINGFLOATINGPOINTOBJECTS_BUBBLESORT_H
#define UOR_CPPSORTINGFLOATINGPOINTOBJECTS_BUBBLESORT_H

#include "Sort.h"

namespace Sorting {

    class BubbleSort: public Sort {
        // Inherit parent constructor (since C++ 11)
        // SOURCE: https://stackoverflow.com/questions/347358/inheriting-constructors
        using Sort::Sort;

    public:
        std::vector<float> sort();
    };

}


#endif //UOR_CPPSORTINGFLOATINGPOINTOBJECTS_BUBBLESORT_H
