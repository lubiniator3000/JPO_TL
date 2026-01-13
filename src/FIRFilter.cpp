#include "FIRFilter.hpp"

using namespace tl;

FIRFilter::FIRFilter(const std::vector<double>& coeffs)
    : coefficients(coeffs) {}

std::vector<double> FIRFilter::apply(
    const std::vector<double>& input
) const {
    std::vector<double> output(input.size(), 0.0);

    for (size_t n = 0; n < input.size(); ++n) {
        for (size_t k = 0; k < coefficients.size(); ++k) {
            if (n >= k) {
                output[n] += coefficients[k] * input[n - k];
            }
        }
    }
    return output;
}