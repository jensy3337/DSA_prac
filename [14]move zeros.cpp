#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0; 
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector<int> nums = {5,0,20,56,0,8,0,2};

    moveZeroes(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
