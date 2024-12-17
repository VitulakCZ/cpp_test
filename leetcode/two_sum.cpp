#include <iostream>
#include <vector>

using namespace std;

vector<int> twosum(vector<int> nums, int target) {
    vector<int> list;
    vector<int> returnList;
    for (int i = 1; i < nums.size(); i++) {
        list.push_back(nums[i - 1] + nums[i]);
    }
    for (int i = 0; i < list.size(); i++) {
        if (list[i] == target) {
            returnList.push_back(i);
            returnList.push_back(i + 1);
        }
    }
    return returnList;
}

int main() {
    vector<int> test = {3, 2, 4};
    vector<int> vysledek = twosum(test, 6);
    for (int v : vysledek)
        cout << v << "\n";
}
