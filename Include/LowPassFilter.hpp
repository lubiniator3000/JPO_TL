#pragma once
#include "FIRFilter.hpp"

class LowPassFilter : public FIRFilter {
public:
    LowPassFilter(double cutoff, int order);
};