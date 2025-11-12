#include "BandPassFilter.hpp"
#include <cmath>
using namespace std;

BandPassFilter::BandPassFilter(string n, double f, double r, double c, double bw)
    : Filter(n, f, r, c), bandwidth(bw) {}

double BandPassFilter::calculateImpedance(double frequency) const {
    return data.resistance * sqrt(1 + pow((frequency - data.cutoffFrequency) / (bandwidth / 2), 2));
}
