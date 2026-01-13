#pragma once
#include "FIRFilter.hpp"
#include "FIRDesign.hpp"

class BandPassFilter : public FIRFilter {
public:
    BandPassFilter()=default;

    ~BandPassFilter() override=default;

    BandPassFilter(double fLow, double fHigh, int order);
};