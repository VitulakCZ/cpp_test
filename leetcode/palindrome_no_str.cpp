#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
// Bez použití stringu btw (StackOverflow pomohl no :D)!
bool palindrome(int num) {
    if (num < 0)
        return false;
    vector<int> nums;

    while(num > 0) {
        nums.push_back(num % 10);
        num /= 10;
    }

    vector<int> numCopy = nums;
    reverse(nums.begin(), nums.end());
    return numCopy == nums;
}

int main() {
    cout << palindrome(121) << endl;
    cout << palindrome(-121) << endl;
    cout << palindrome(10) << endl;
    cout << palindrome(96969) << endl;
}
