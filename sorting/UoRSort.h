//
// Created by ben on 04/02/16.
//

#ifndef UOR_CPPSORTINGFLOATINGPOINTOBJECTS_UORSORT_H
#define UOR_CPPSORTINGFLOATINGPOINTOBJECTS_UORSORT_H

#include <vector>
#include "../floatingpoint/UoRFloat.h"

namespace Sorting {

    class UoRSort {
    public:
        UoRSort(std::vector<floatingpoint::UoRFloat> items);
        UoRSort();

        std::vector<floatingpoint::UoRFloat> getList();
        void setList(std::vector<floatingpoint::UoRFloat> items);

        virtual std::vector<floatingpoint::UoRFloat> sort() = 0;

    protected:
        std::vector<floatingpoint::UoRFloat> list;
    };

}


#endif //UOR_CPPSORTINGFLOATINGPOINTOBJECTS_UORSORT_H
