#pragma once
#include "FIRFilter.hpp"
#include "FIRDesign.hpp"

class HighPassFilter : public FIRFilter {
public:

    HighPassFilter()=default;
    
    ~HighPassFilter() override=default;

    HighPassFilter(double cutoff, int order);
};