#include "FilterAnalyzer.hpp"
#include <iostream>
using namespace std;

void FilterAnalyzer::analyzeFilters(const vector<Filter*>& filters, double testFrequency) {
    cout << "\n=== АНАЛІЗ ФІЛЬТРІВ ===\n";
    for (auto f : filters) {
        cout << "Назва фільтра: " << f->data.name << endl;
        cout << "Частота зрізу: " << f->data.cutoffFrequency << " Гц" << endl;
        cout << "Опір: " << f->data.resistance << " Ом" << endl;
        cout << "Ємність: " << f->data.capacitance << " Ф" << endl;
        cout << "Імпеданс при " << testFrequency << " Гц: "
             << f->calculateImpedance(testFrequency) << " Ом\n\n";
    }
}
