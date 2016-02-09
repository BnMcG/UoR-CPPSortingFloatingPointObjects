//
// Created by ben on 04/02/16.
//

#ifndef UOR_CPPSORTINGFLOATINGPOINTOBJECTS_UORBUBBLESORT_H
#define UOR_CPPSORTINGFLOATINGPOINTOBJECTS_UORBUBBLESORT_H

#include "UoRSort.h"

namespace Sorting {

    class UoRBubbleSort: public UoRSort {
        // Inherit parent constructor (since C++ 11)
        // SOURCE: https://stackoverflow.com/questions/347358/inheriting-constructors
        using UoRSort::UoRSort;

    public:
        std::vector<floatingpoint::UoRFloat> sort();
    };

}


#endif //UOR_CPPSORTINGFLOATINGPOINTOBJECTS_UORBUBBLESORT_H
