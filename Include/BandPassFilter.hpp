#pragma once
#include "FIRFilter.hpp"

class BandPassFilter : public FIRFilter {
public:
    BandPassFilter(double fLow, double fHigh, int order);
};