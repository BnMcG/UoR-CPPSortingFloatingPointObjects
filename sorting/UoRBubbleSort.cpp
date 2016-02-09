//
// Created by ben on 04/02/16.
//

#include <iostream>
#include <cmath>

#include "UoRBubbleSort.h"

using namespace floatingpoint;

namespace Sorting {
    std::vector<UoRFloat> UoRBubbleSort::sort() {
        // This variable holds whether or not we swapped any elements during our bubble sort run
        bool swapped;
        std::vector<UoRFloat> nans;

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

                    if(UoRFloat::isNaN(list[i])) {
                        nans.push_back(list[i]);
                        list.erase(list.begin() + i);
                    }

                    // This if statement will compare standard floats such as 44.23423423 and 23.3453456
                    // and sort them correctly. We handle some special cases below this block
                    if (list[i].getFloat() > list[i + 1].getFloat()) {
                        std::swap(list[i], list[i + 1]);
                        swapped = true;
                    }

                    // Special case: +/- 0. If the next element is -0 and the current element is +0, swap them over
                    // manually, because C++ evaluates them as equals using standard >, < operators.
                    // std::signbit returns true if the parameter is negative, else false
                    // SOURCE: http://en.cppreference.com/w/cpp/numeric/math/signbit
                    // SOURCE: https://stackoverflow.com/questions/20946566/distinguish-zero-and-negative-zero-c
                    if(list[i].getFloat() == 0 && list[i+1].getFloat() == 0) {
                        if(std::signbit(list[i+1].getFloat()) && !(std::signbit(list[i].getFloat()))) {
                            std::swap(list[i], list[i + 1]);
                            swapped = true;
                        }
                    }

                }
            }

        } while(swapped);

        if(nans.size() > 0) {
            swapped = false;

            // Bubble sort NaNs by Mantissa
            do {
                swapped = false;

                for (int i = 0; i < nans.size() - 1; i++) {
                    if (nans[i].getMantissa() > nans[i + 1].getMantissa()) {
                        std::swap(nans[i], nans[i + 1]);
                        swapped = true;
                    }
                }

            } while(swapped);

            // Push back onto main list
            for(int i = 0; i < nans.size(); i++) {
                list.push_back(nans[i]);
            }
        }

        return list;

    }
}