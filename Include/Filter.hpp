#pragma once
#include <vector>

class Filter {
public:
    virtual ~Filter() = default;

    virtual std::vector<double> apply(
        const std::vector<double>& input
    ) const = 0;
};
