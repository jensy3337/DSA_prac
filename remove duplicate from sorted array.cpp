#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for (int j=1;j<nums.size();j++) {
        if(nums[j]!=nums[i]) {
            i++;
            nums[i]=nums[j];
        }
    }
    return i + 1;
}

int main() {
    vector<int> nums={5,5,5,2,2,2,1,1,9,9,9,0,0,0};

    int k = removeDuplicates(nums);
    cout<<"new array:";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
