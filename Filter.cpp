#include "Filter.hpp"
using namespace std;

Filter::Filter(string n, double f, double r, double c) {
    data.name = n;
    data.cutoffFrequency = f;
    data.resistance = r;
    data.capacitance = c;
}

Filter::~Filter() {}

void Filter::showInfo() const {
    cout << "Назва фільтра: " << data.name << endl;
    cout << "Частота зрізу: " << data.cutoffFrequency << " Гц" << endl;
    cout << "Опір: " << data.resistance << " Ом" << endl;
    cout << "Ємність: " << data.capacitance << " Ф" << endl;
}

FilterData Filter::getData() const {
    return data;
}
