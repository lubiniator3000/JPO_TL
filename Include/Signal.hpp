#pragma once
#include <vector>
#include <string>

class Signal {
private:
    std::vector<double> samples;

public:
    bool loadFromFile(const std::string& filename);
    bool saveToFile(const std::string& filename) const;

    const std::vector<double>& getSamples() const;
    void setSamples(const std::vector<double>& newSamples);
};
