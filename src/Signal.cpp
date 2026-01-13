#include "Signal.hpp"
#include <fstream>

bool Signal::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) return false;

    samples.clear();
    double value;
    while (file >> value) {
        samples.push_back(value);
    }
    return true;
}

bool Signal::saveToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (!file) return false;

    for (double s : samples) {
        file << s << "\n";
    }
    return true;
}

const std::vector<double>& Signal::getSamples() const {
    return samples;
}

void Signal::setSamples(const std::vector<double>& newSamples) {
    samples = newSamples;
}
