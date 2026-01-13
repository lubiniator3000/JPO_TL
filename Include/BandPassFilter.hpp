#pragma once
#include "FIRFilter.hpp"
#include "FIRDesign.hpp"

namespace tl {


class BandPassFilter : public FIRFilter {
public:
    BandPassFilter()=default;

    ~BandPassFilter() override=default;

    BandPassFilter(double fLow, double fHigh, int order);
};

}