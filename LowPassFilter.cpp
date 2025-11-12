#include "LowPassFilter.hpp"
#include <cmath>
using namespace std;

LowPassFilter::LowPassFilter(string n, double f, double r, double c)
    : Filter(n, f, r, c) {}

double LowPassFilter::calculateImpedance(double frequency) const {
    double Xc = 1.0 / (2 * M_PI * frequency * data.capacitance);
    return sqrt(pow(data.resistance, 2) + pow(Xc, 2));
}
