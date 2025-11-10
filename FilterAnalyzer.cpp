#include "FilterAnalyzer.hpp"
#include <iostream>
using namespace std;

void FilterAnalyzer::analyzeFilters(const vector<Filter*>& filters, double testFrequency) {
    cout << "\n=== АНАЛІЗ ФІЛЬТРІВ ===\n";
    for (auto f : filters) {
        f->showInfo();
        cout << "Імпеданс при " << testFrequency << " Гц: "
             << f->calculateImpedance(testFrequency) << " Ом\n\n";
    }
}
