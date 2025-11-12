#pragma once
#include <string>
#include <iostream>
#include <vector>

class FilterAnalyzer;
class LowPassFilter;
class BandPassFilter;

struct FilterData {
    std::string name;
    double cutoffFrequency;
    double resistance;
    double capacitance;
};

class Filter {
private:
    FilterData data;
    friend class FilterAnalyzer;
    friend class LowPassFilter;
    friend class BandPassFilter;
public:
    Filter(std::string n = "Unknown", double f = 0, double r = 0, double c = 0);
    virtual ~Filter();
    virtual double calculateImpedance(double frequency) const = 0;
};
