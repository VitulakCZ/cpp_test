#include <iostream>

using namespace std;
int romanToInt(string roman) {
    int num = 0;
    for (int i = 0; i < roman.size(); i++) {
        switch (roman[i]) {
            case 'I':
                num += 1;
                break;
            case 'V':
                num += 5;
                if (roman[i - 1] == 'I')
                    num -= 2;
                break;
            case 'X':
                num += 10;
                if (roman[i - 1] == 'I')
                    num -= 2;
                break;
            case 'L':
                num += 50;
                if (roman[i - 1] == 'X')
                    num -= 20;
                break;
            case 'C':
                num += 100;
                if (roman[i - 1] == 'X')
                    num -= 20;
                break;
            case 'D':
                num += 500;
                if (roman[i - 1] == 'C')
                    num -= 200;
                break;
            case 'M':
                num += 1000;
                if (roman[i - 1] == 'C')
                    num -= 200;
                break;
        }
    }
    return num;
}

int main() {
    cout << romanToInt("MCD") << endl;
}
