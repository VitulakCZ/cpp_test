#include <iostream>
#include <vector>

using namespace std;

int decimal_to_binary(int n) {
    vector<int> cisla;
    for (;n > 0;n/=2) {
        cisla.push_back(n%2);
    }
    string s_cislo;
    for (int i = cisla.size(); i >= 0; i--)
        s_cislo += to_string(cisla[i]);
    int cislo = stoi(s_cislo);
    return cislo;
}

int main() {
    cout << decimal_to_binary(75) << '\n';
}
