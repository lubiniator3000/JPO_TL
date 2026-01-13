#pragma once
#include "FIRFilter.hpp"
#include "FIRDesign.hpp"

namespace tl {


class LowPassFilter : public FIRFilter {
public:
    LowPassFilter()=default;

    ~LowPassFilter() override=default;

    LowPassFilter(double cutoff, int order);
};

}