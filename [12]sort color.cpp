#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements (0,1,2): ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count0 = 0, count1 = 0, count2 = 0;

    // Count 0s, 1s, 2s
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else count2++;
    }

    // Fill array
    int index = 0;

    for(int i = 0; i < count0; i++) arr[index++] = 0;
    for(int i = 0; i < count1; i++) arr[index++] = 1;
    for(int i = 0; i < count2; i++) arr[index++] = 2;

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
