#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr={1,87,42,9,77};
    int max=arr[0];

    for(int i=1;i<arr.size();i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"largest number:"<<max;
    return 0;
}
