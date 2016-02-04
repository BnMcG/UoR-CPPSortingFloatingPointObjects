//
// Created by ben on 04/02/16.
//

#ifndef UOR_CPPSORTINGFLOATINGPOINTOBJECTS_SORT_H
#define UOR_CPPSORTINGFLOATINGPOINTOBJECTS_SORT_H

#include <vector>

namespace Sorting {

    class Sort {
    public:
        virtual std::vector<float> sort() = 0;
        Sort(std::vector<float> items);
        Sort();

        std::vector<float> getList();
        void setList(std::vector<float> items);

    protected:
        std::vector<float> list;
    };

}


#endif //UOR_CPPSORTINGFLOATINGPOINTOBJECTS_SORT_H
