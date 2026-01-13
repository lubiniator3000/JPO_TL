#include "LowPassFilter.hpp"
#include "FIRDesign.hpp"

using namespace tl;

LowPassFilter::LowPassFilter(double cutoff, int order)
    : FIRFilter(firLowPass(cutoff, order)) {}