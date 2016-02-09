//
// Created by ben on 09/02/16.
//

#ifndef UOR_CPPSORTINGFLOATINGPOINTOBJECTS_UORFLOAT_H
#define UOR_CPPSORTINGFLOATINGPOINTOBJECTS_UORFLOAT_H

#include <stdint.h>

namespace floatingpoint {

    /**
     * Floating point object with a 23 bit mantissa and 8 bit exponent.
     * However we use floats and ints to store these to make use of
     * C++ functions like frexpf
     */

    class UoRFloat {

    protected:
        int* exponent;
        float mantissa;

    public:
        void setExponent(int *exp);

        int* getExponent();

        void setMantissa(float mnt);

        float getMantissa();

        float getFloat();

        UoRFloat();

        UoRFloat(float value);

        UoRFloat(float mantissa, int *exponent);

        static bool isNaN(UoRFloat f);
    };
}


#endif //UOR_CPPSORTINGFLOATINGPOINTOBJECTS_UORFLOAT_H
