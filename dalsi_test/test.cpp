#include <iostream>
#include <cstring>

using namespace std;

int main() {
    constexpr size_t POCET_BAJTU = 65;
    char mega_char[POCET_BAJTU];
    memset(mega_char, 'E', POCET_BAJTU-1);
    cout << mega_char << '\n';
}
