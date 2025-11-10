#include "LowPassFilter.hpp"
#include <cmath>
using namespace std;

LowPassFilter::LowPassFilter(string n, double f, double r, double c)
    : Filter(n, f, r, c) {}

double LowPassFilter::calculateImpedance(double frequency) const {
    FilterData d = getData();
    double Xc = 1.0 / (2 * M_PI * frequency * d.capacitance);
    return sqrt(pow(d.resistance, 2) + pow(Xc, 2));
}
