#include "HighPassFilter.hpp"
#include "FIRDesign.hpp"

HighPassFilter::HighPassFilter(double cutoff, int order)
    : FIRFilter(firHighPass(cutoff, order)) {}