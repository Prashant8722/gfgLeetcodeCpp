#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Function to find unique rows in a binary matrix
vector<vector<int>> findUniqueRows(int M[][4], int row, int col) {
    vector<vector<int>> result;
    unordered_map<string, int> uniqueRows;

    for (int i = 0; i < row; i++) {
        string rowString = "";
        for (int j = 0; j < col; j++) {
            rowString += to_string(M[i][j]);
        }

        // If the current row is not present in the map
        // Add it to the result and map
        if (uniqueRows.find(rowString) == uniqueRows.end()) {
            uniqueRows[rowString] = i;
            vector<int> currentRow;
            for (int j = 0; j < col; j++) {
                currentRow.push_back(M[i][j]);
            }
            result.push_back(currentRow);
        }
    }

    return result;
}

// Function to print a matrix
void printMatrix(int M[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row = 3;
    int col = 4;
    int M[][4] = {{1, 1, 0, 1},
                  {1, 0, 0, 1},
                  {1, 1, 0, 1}};

    cout << "Input Matrix:" << endl;
    printMatrix(M, row, col);

    vector<vector<int>> uniqueRows = findUniqueRows(M, row, col);

    cout << "Unique Rows:" << endl;
    for (const auto& row : uniqueRows) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
