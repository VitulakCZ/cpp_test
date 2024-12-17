#include <iostream>
#include <algorithm>
#include <cstdlib>
#include "data.h"

using namespace std;
int main () {
    constexpr int VELIKOST = 1000;
    sort(vlevo.begin(), vlevo.end());
    sort(vpravo.begin(), vpravo.end());
    int soucet_diff = 0;
    for (int i = 0; i < VELIKOST; i++) {
        soucet_diff += abs(vlevo[i] - vpravo[i]);
    }
    cout << soucet_diff << endl;

    int similarity_score = 0;
    for (int i = 0; i < VELIKOST; i++) {
        int kolikrat = 0;
        for (int j = 0; j < VELIKOST; j++) {
            if (vlevo[i] == vpravo[j]) {
                kolikrat++;
            }
        }
        similarity_score += vlevo[i]*kolikrat;
    }
    cout << similarity_score << endl;
}
