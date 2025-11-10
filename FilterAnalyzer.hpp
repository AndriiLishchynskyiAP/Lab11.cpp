#pragma once
#include "LowPassFilter.hpp"
#include "BandPassFilter.hpp"

class FilterAnalyzer {
public:
    static void analyzeFilters(const std::vector<Filter*>& filters, double testFrequency);
};
