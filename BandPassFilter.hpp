#pragma once
#include "Filter.hpp"

class BandPassFilter : public Filter {
private:
    double bandwidth;
    friend class FilterAnalyzer;
public:
    BandPassFilter(std::string n, double f, double r, double c, double bw);
    double calculateImpedance(double frequency) const override;
};
