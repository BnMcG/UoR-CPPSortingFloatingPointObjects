//
// Created by ben on 04/02/16.
//

#include <iostream>
#include "BubbleSort.h"

namespace Sorting {
    std::vector<float> BubbleSort::sort() {
        // This variable holds whether or not we swapped any elements during our bubble sort run
        bool swapped;

        /**
         * This loop will run until we didn't perform any swaps during a run through the list of items.
         * Maximum number of runs: n-1, where n is the number of elements in the list
         */

        do {

            // Reset the swap variable in-case we don't perform any swaps this time
            swapped = false;

            // If the list is empty it's safe to assume it's already sorted
            if(list.size() > 0) {

                // Loop until the 2nd-to-last element in the list. If we loop through all the items there is nothing
                // to swap the final item with, and things will break. Bob the builder won't be able to fix it :(
                for (int i = 0; i < list.size() - 1; i++) {

                    if (list[i] > list[i + 1]) {
                        std::swap(list[i], list[i + 1]);
                        swapped = true;
                    }

                }
            }

        } while(swapped);

        return list;

    }
}