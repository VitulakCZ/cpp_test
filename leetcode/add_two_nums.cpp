#include <iostream>
#include <vector>

using namespace std;

vector<int> addTwoNumbers(vector<int> num1, vector<int> num2) {
    vector<int> num1_correct;
    vector<int> num2_correct;

    for (int i = num1.size(); i >= 0; i--)
        num1_correct.push_back(num1[i]);

    for (int i = num2.size(); i >= 0; i--)
        num2_correct.push_back(num2[i]);

    string num1_str;
    string num2_str;

    for (int n : num1_correct)
        num1_str += to_string(n);

    for (int n : num2_correct)
        num2_str += to_string(n);

    int num1_ret = stoi(num1_str);
    int num2_ret = stoi(num2_str);
    string num_ret_str = to_string(num1_ret + num2_ret);
    vector<int> num_ret;
    for (int i = num_ret_str.size() - 1; i >= 0; i--) {
        string s;
        s.push_back(num_ret_str[i]);
        num_ret.push_back(stoi(s));
    }
    return num_ret; 
}

int main() {
    vector<int> num1 = {9,9,9,9,9,9,9};
    vector<int> num2 = {9,9,9,9};
    vector<int> num = addTwoNumbers(num1, num2);

    for (int n : num)
        cout << n;
    cout << endl;
}
