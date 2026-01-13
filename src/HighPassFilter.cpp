#include "HighPassFilter.hpp"
#include "FIRDesign.hpp"

using namespace tl;

HighPassFilter::HighPassFilter(double cutoff, int order)
    : FIRFilter(firHighPass(cutoff, order)) {}