#include <string>
// Nejlepší knihovna všech dob!
int test_funkce(int i) {
    return i + 1;
}

const char *do_string(const char *string) {
    return ((std::string)string + '\n').c_str();
}
