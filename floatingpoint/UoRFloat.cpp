//
// Created by ben on 09/02/16.
//

#include "UoRFloat.h"
#include <cmath>

namespace floatingpoint {

    void UoRFloat::setExponent(int *exp) {
        exponent = exp;
    }

    void UoRFloat::setMantissa(float mnt) {
        mantissa = mnt;
    }

    int *UoRFloat::getExponent() {
        return exponent;
    }

    float UoRFloat::getMantissa() {
        return mantissa;
    }

    float UoRFloat::getFloat() {
        return mantissa * (float) pow(2, (double) *exponent);
    }

    UoRFloat::UoRFloat(){
        // Allocate memory for the exponent we're presumably going to be given at some point
        exponent = new int(0);
    }

    UoRFloat::UoRFloat(float value) {
        // Split the given float value into a mantissa and exponent
        exponent = new int(0); // Allocate memory for the exponent because it's a pointer :(
        mantissa = frexpf(value, exponent);
    }

    UoRFloat::UoRFloat(float mantissa, int* exponent){
        this->mantissa = mantissa;
        this->exponent = exponent;
    }

    bool UoRFloat::isNaN(UoRFloat f) {
        // We're considering 8 bit exponents so an exponent of value 255 would be NaN
        // As long as the mantissa has a value
        return *f.exponent == 255 && f.mantissa > 0;
    }



}