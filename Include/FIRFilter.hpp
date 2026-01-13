#pragma once
#include <vector>
#include "Filter.hpp"

class FIRFilter : public Filter {
protected:
    std::vector<double> coefficients;

public:
    explicit FIRFilter(const std::vector<double>& coeffs);

    std::vector<double> apply(
        const std::vector<double>& input
    ) const override;
};
