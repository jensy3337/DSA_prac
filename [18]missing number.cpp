#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    
    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    return total - sum;
}

int main() {
    vector<int> nums = {3, 0, 1};

    cout << missingNumber(nums);

    return 0;
}
