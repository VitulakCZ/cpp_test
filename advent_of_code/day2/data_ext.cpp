#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
    constexpr int VELIKOST = 1000;
    string s;
    int c;
    FILE *file;
    file = fopen("data.txt", "r");
    while ((c = getc(file)) != EOF)
        s.push_back(c);
    fclose(file);
    stringstream ss(s);
    string t;
    char del = '\n';
    vector<string> str;
    while (getline(ss, t, del)) {
        string temp_s = t + " ";
        str.push_back(temp_s);
    }
    vector<vector<int>> cisla;
    for (int i = 0; i < VELIKOST; i++) {
        stringstream ss(str[i]);
        string t;
        vector<string> cisla_str;
        vector<int> cisla_v_radku;
        char del = ' ';
        while (getline(ss, t, del)) {
            string temp_s = t + " ";
            cisla_str.push_back(temp_s);
        }
        for (int j = 0; j < cisla_str.size(); j++) {
            cisla_v_radku.push_back(stoi(cisla_str[j]));
        }
        cisla.push_back(cisla_v_radku);
    }

    int pocet_success = 0;
    for (vector<int> list_int: cisla) {
        int pocet = 0;
        int nejvetsi_cislo;
        bool success = true;
        char status = '-'; // N = Nahoru; D = Dolu
        for (int i: list_int) {
            if (pocet == 0) {
                nejvetsi_cislo = i;
            } else if (i < nejvetsi_cislo && pocet == 1) {
                if ((nejvetsi_cislo - i) <= 3) {
                    nejvetsi_cislo = i;
                    status = 'D';
                } else {
                    success = false;
                    break;
                }
            } else if (i > nejvetsi_cislo && pocet == 1) {
                if ((i - nejvetsi_cislo) <= 3) {
                    nejvetsi_cislo = i;
                    status = 'N';
                } else {
                    success = false;
                    break;
                }
            } else if (i < nejvetsi_cislo) {
                if (status == 'D' && (nejvetsi_cislo - i <= 3)) {
                    nejvetsi_cislo = i;
                } else {
                    success = false;
                    break;
                }
            } else if (i > nejvetsi_cislo) {
                if (status == 'N' && (i - nejvetsi_cislo <= 3)) {
                    nejvetsi_cislo = i;
                } else {
                    success = false;
                    break;
                }
            } else if (i == nejvetsi_cislo) {
                success = false;
                break;
            }
            pocet++;
        }
        if (success)
            pocet_success++;
    }
    cout << pocet_success << endl;
    return 0;
}
