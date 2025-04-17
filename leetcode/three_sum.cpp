#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<vector<int>> three_sum(vector<int>& nums, int target) {
    vector<vector<int>> ret;
    vector<vector<int>> ret_serazeno;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                if (nums[i] + nums[j] + nums[k] == target)
                    ret.push_back({nums[i], nums[j], nums[k]});
            }
        }
    }
    for (vector<int> nums : ret) {
        int nejvyssi_cislo = INT_MIN;
        int nejnizsi_cislo = INT_MAX;
        int stredni_cislo;
        int index1;
        int index2;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > nejvyssi_cislo) {
                nejvyssi_cislo = nums[i];
                index1 = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < nejnizsi_cislo) {
                nejnizsi_cislo = nums[i];
                index2 = i;
            }
        }
        if (index1 == 0 && index2 == 1) stredni_cislo = nums[2];
        else if (index1 == 1 && index2 == 2) stredni_cislo = nums[0];
        else if (index1 == 0 && index2 == 2) stredni_cislo = nums[1];
        else if (index1 == 1 && index2 == 0) stredni_cislo = nums[2];
        else if (index1 == 2 && index2 == 1) stredni_cislo = nums[0];
        else if (index1 == 2 && index2 == 0) stredni_cislo = nums[1];
        ret_serazeno.push_back({nejnizsi_cislo, stredni_cislo, nejvyssi_cislo});
    }
    vector<int> index_vyhodit;
    for (int i = 0; i < ret_serazeno.size(); i++) {
        for (int j = ret_serazeno.size() - 1; j > i; j--) {
            if (ret_serazeno[i] == ret_serazeno[j]) index_vyhodit.push_back(i);
        }
    }
    for (int index : index_vyhodit) {
        ret_serazeno.erase(ret_serazeno.begin() + index);
    }
    return ret_serazeno;
}

int main() {
    //vector<int> nums = {40, -20, 10, 10, 70, -50};
    vector<int> nums = {1, 2, 4, 3, 6, 7};
    int target = 10;
    vector<vector<int>> _final = three_sum(nums, target);
    for (vector<int> nums : _final) {
        for (int num : nums) {
            cout << num << ' ';
        }
        cout << '\n';
    }
    return 0;
}
