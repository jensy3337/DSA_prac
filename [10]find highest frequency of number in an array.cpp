#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    // Count frequency
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0, element;

    // Find element with highest frequency
    for(auto it : freq) {
        if(it.second > maxFreq) {
            maxFreq = it.second;
            element = it.first;
        }
    }

    cout << "Element with highest frequency: " << element << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}
