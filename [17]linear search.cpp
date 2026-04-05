#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout<<"enter size of array:";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout<<"enter array element"<<i<<":";
        cin >> arr[i];
    }

    cout<<"enter element to search:";
    cin >> x;

    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }

    cout<<"index value:"<< index;

    return 0;
}
