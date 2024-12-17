#include <iostream>

using namespace std;

string reverse_str(string str) {
    string ret_str;
    for (int i = str.size() - 1; i >= 0; i--)
        ret_str.push_back(str[i]);
    return ret_str;
}

int main() {
    cout << reverse_str("Ahoj") << endl;
}
