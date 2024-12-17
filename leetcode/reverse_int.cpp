#include <iostream>

using namespace std;
int reverse_int(int num) {
    string num_str = to_string(num);
    string str_ret;
    int num_ret;

    for (int i = num_str.size() - 1; i >= 0; i--)
        str_ret += num_str[i];

    if (str_ret[str_ret.size() - 1] == '-') {
        str_ret.pop_back();
        return -stoi(str_ret);
    }
    return stoi(str_ret);
}

int main() {
    cout << reverse_int(-120) << endl;
}
