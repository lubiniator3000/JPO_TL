#include "LowPassFilter.hpp"
#include "FIRDesign.hpp"

LowPassFilter::LowPassFilter(double cutoff, int order)
    : FIRFilter(firLowPass(cutoff, order)) {}