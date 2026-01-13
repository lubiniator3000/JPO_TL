#pragma once
#include "FIRFilter.hpp"
#include "FIRDesign.hpp"

class HighPassFilter : public FIRFilter {
public:
    HighPassFilter(double cutoff, int order);
};