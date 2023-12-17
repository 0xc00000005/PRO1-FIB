#include <iostream>
#include <vector>
using namespace std;

int countSymbols(vector<vector<char>>& grid, int rows, int cols, int contador) {
    bool isFace1 = false, isFace2 = false, isArrow1 = false, isArrow2 = false;
    isFace1 = isFace2 = false;
    //Files
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (grid[r][c] == ':') isFace1 = true;
            else if (grid[r][c] == '-' && isFace1) isFace1 = true;
            else if (grid[r][c] == ')' && isFace1 && grid[r][c - 1] == '-') {
                contador=contador+1;
                isFace1 = false;
            } 
            else isFace1 = false;

            if (grid[r][c] == '(') isFace2 = true;
            else if (grid[r][c] == '-' && isFace2) isFace2 = true;
            else if (grid[r][c] == ':' && isFace2 && grid[r][c - 1] == '-') {
                ++contador;
                isFace2 = false;
            } 
            else isFace2 = false;
            
        }
    }
    //Columnes
    for (int c = 0; c < cols; ++c) {
        for (int r = 0; r < rows; ++r) {
            if (grid[r][c] == '"') isArrow1 = true;
            else if (grid[r][c] == '|' && isArrow1) isArrow1 = true;
            else if (grid[r][c] == 'v' && isArrow1 && grid[r - 1][c] == '|') {
                ++contador;
                isArrow1 = false;
            } 
            else isArrow1 = false;
            if (grid[r][c] == '^') isArrow2 = true;
            else if (grid[r][c] == '|' && isArrow2) isArrow2 = true;
            else if (grid[r][c] == '"' && isArrow2 && grid[r - 1][c] == '|') {
                ++contador;
                isArrow2 = false;
            } 
            else isArrow2 = false;
            
        }
    }
    return contador;
}

int main() {
    int rows, cols;
    while (cin >> rows >> cols) {
        int contador=0;

        vector<vector<char>> grid(rows, vector<char>(cols));

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                cin >> grid[r][c];
            }
        }

        cout << countSymbols(grid, rows, cols, contador) << endl;
    }

    return 0;
}
