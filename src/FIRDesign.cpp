#include "FIRDesign.hpp"
#include <cmath>

#define M_PI 3.14159265358979323846

std::vector<double> firLowPass(
    double cutoff,
    int order
) {
    std::vector<double> h(order + 1);
    int M = order;

    for (int n = 0; n <= M; ++n) {
        if (n == M / 2) {
            h[n] = 2.0 * cutoff;
        } else {
            double x = n - M / 2.0;
            h[n] = sin(2.0 * M_PI * cutoff * x)
                 / (M_PI * x);
        }
    }
    return h;
}

std::vector<double> firHighPass(
    double cutoff,
    int order
) {
    auto lp = firLowPass(cutoff, order);
    std::vector<double> hp(order + 1);

    int M = order;

    for (int n = 0; n <= M; ++n) {
        if (n == M / 2)
            hp[n] = 1.0 - lp[n];
        else
            hp[n] = -lp[n];
    }
    return hp;
}

std::vector<double> firBandPass(
    double fLow,
    double fHigh,
    int order
) {
    auto lpHigh = firLowPass(fHigh, order);
    auto lpLow  = firLowPass(fLow, order);

    std::vector<double> bp(order + 1);

    for (int i = 0; i <= order; ++i) {
        bp[i] = lpHigh[i] - lpLow[i];
    }
    return bp;
}