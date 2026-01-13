#include "BandPassFilter.hpp"
#include "FIRDesign.hpp"

using namespace tl;

BandPassFilter::BandPassFilter(
    double fLow,
    double fHigh,
    int order
)
    : FIRFilter(firBandPass(fLow, fHigh, order)) {}