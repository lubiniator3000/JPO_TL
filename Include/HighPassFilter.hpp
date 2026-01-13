#pragma once
#include "FIRFilter.hpp"
#include "FIRDesign.hpp"

namespace tl {


class HighPassFilter : public FIRFilter {
public:

    HighPassFilter()=default;

    ~HighPassFilter() override=default;

    HighPassFilter(double cutoff, int order);
};

}