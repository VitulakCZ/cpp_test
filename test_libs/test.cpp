#include <iostream>

#include "test.h"
int main() {
    for (int i = 0; i < 10; i++)
        std::cout << i << "\n" << test_funkce(i) << "\n";
    otevrit("text.txt");
}
