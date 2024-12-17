#include <string>
#include "test.h"

int test_funkce(int i) {
    return i + 1;
}

const char *do_string(const char *string) {
    return ((std::string)string + '\n').c_str();
}
