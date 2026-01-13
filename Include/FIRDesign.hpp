#pragma once
#include <vector>

namespace tl {


std::vector<double> firLowPass(double cutoff, int order);
std::vector<double> firHighPass(double cutoff, int order);
std::vector<double> firBandPass(double fLow, double fHigh, int order);

}