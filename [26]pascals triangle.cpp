#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 10;
    vector<vector<int>> triangle;

    for (int i = 0; i < n; i++) {
        vector<int> row(i + 1, 1);

        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        triangle.push_back(row);
    }

    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i - 1; s++) {
            cout << " ";
        }

        for (int j = 0; j < triangle[i].size(); j++) {
            cout << triangle[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
