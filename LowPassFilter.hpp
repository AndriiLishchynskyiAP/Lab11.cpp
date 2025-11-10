#pragma once
#include "Filter.hpp"

class LowPassFilter : public Filter {
    friend class FilterAnalyzer;
public:
    LowPassFilter(std::string n, double f, double r, double c);
    double calculateImpedance(double frequency) const override;
};
