#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> nums){
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> nums={1,3,4};
    if(checkSorted(nums))
        cout<<"sorted";
    else
        cout<<"not sorted";
    return 0;
}
