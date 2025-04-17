#include <iostream>
#include <vector>
using namespace std;

int count_pairs(vector<int>& nums, int k) {
    int pocet = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = nums.size() - 1; j > i; j--) {
            if (nums[i] == nums[j] && (i * j) % k == 0) pocet++;
        }
    }
    return pocet;
}

int main() {
    vector<int> nums = {3,1,2,2,2,1,3};
    int target = 2;
    cout << count_pairs(nums, target) << endl;
    return 0;
}
