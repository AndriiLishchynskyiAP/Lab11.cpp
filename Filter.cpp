#include "Filter.hpp"
using namespace std;

Filter::Filter(string n, double f, double r, double c) {
    data.name = n;
    data.cutoffFrequency = f;
    data.resistance = r;
    data.capacitance = c;
}

Filter::~Filter() {}
