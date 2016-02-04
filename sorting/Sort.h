//
// Created by ben on 04/02/16.
//

#ifndef UOR_CPPSORTINGFLOATINGPOINTOBJECTS_SORT_H
#define UOR_CPPSORTINGFLOATINGPOINTOBJECTS_SORT_H

#include <vector>

namespace Sorting {

    class Sort {
    public:
        Sort(std::vector<float> items);
        Sort();

        std::vector<float> getList();
        void setList(std::vector<float> items);

        virtual std::vector<float> sort() = 0;

    protected:
        std::vector<float> list;
    };

}


#endif //UOR_CPPSORTINGFLOATINGPOINTOBJECTS_SORT_H
