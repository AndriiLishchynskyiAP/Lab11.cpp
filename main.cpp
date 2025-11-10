#include "FilterAnalyzer.hpp"
#include <vector>
#include <limits>
using namespace std;

int main() {
    vector<Filter*> filters;
    int n;
    cout << "Кількість фільтрів: ";
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; ++i) {
        int type;
        cout << "Тип (1 - низьких частот, 2 - смуговий): ";
        cin >> type;

        string name;
        double f, r, c;
        cout << "Назва: "; cin >> ws; getline(cin, name);
        cout << "Частота зрізу (Гц): "; cin >> f;
        cout << "Опір (Ом): "; cin >> r;
        cout << "Ємність (Ф): "; cin >> c;

        if (type == 1) {
            filters.push_back(new LowPassFilter(name, f, r, c));
        } else {
            double bw;
            cout << "Смуга пропускання (Гц): "; cin >> bw;
            filters.push_back(new BandPassFilter(name, f, r, c, bw));
        }
    }

    double testFreq;
    cout << "Тестова частота (Гц): "; cin >> testFreq;

    FilterAnalyzer::analyzeFilters(filters, testFreq);

    for (auto f : filters) delete f;
    return 0;
}
