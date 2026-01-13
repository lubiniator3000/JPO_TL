#include "Signal.hpp"
#include "LowPassFilter.hpp"
#include "HighPassFilter.hpp"
#include "BandPassFilter.hpp"

int main() {
    Signal signal;
    signal.loadFromFile("input.txt");

    BandPassFilter filter(0.1, 0.3, 40);
    auto result = filter.apply(signal.getSamples());

    signal.setSamples(result);
    signal.saveToFile("output.txt");

    return 0;
}
