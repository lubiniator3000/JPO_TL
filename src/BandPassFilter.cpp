#include "BandPassFilter.hpp"
#include "FIRDesign.hpp"

BandPassFilter::BandPassFilter(
    double fLow,
    double fHigh,
    int order
)
    : FIRFilter(firBandPass(fLow, fHigh, order)) {}