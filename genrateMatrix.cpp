#include <iostream>
#include <vector>
using namespace std;

void insertSpiral(vector<vector<int>>& vec, int m, int n) {
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    int value = 1;

    while (top <= bottom && left <= right) {
        // Fill the top row from left to right
        for (int i = left; i <= right; i++) {
            vec[top][i] = value++;
        }
        top++;

        // Fill the rightmost column from top to bottom
        for (int i = top; i <= bottom; i++) {
            vec[i][right] = value++;
        }
        right--;

        // Fill the bottom row from right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                vec[bottom][i] = value++;
            }
            bottom--;
        }

        // Fill the leftmost column from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                vec[i][left] = value++;
            }
            left++;
        }
    }
}

void printVector(const vector<vector<int>>& vec) {
    for (const vector<int>& row : vec) {
        for (int value : row) {
            cout << value << "\t";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    vector<vector<int>> vec(m, vector<int>(n, 0)); 
    insertSpiral(vec, m, n);

    cout << "2D Vector in Spiral Order:\n";
    printVector(vec);

    return 0;
}
