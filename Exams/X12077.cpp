#include <iostream>
#include <vector>

using namespace std;

int seguro(const vector<vector<int>>& M, int i, int j) {
    int value = 0;
    if (i >= 0 and j >= 0) value = M[i][j];
    return value;
}

int countHappy(const vector<vector<char>>& M, int n, int m) {
    int numHappy = 0;
    vector<vector<int>> points(n, vector<int>(m, 0));
    vector<vector<int>> hyphens(n, vector<int>(m, 0));
    vector<vector<int>> parentheses(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            points[i][j] = seguro(points, i - 1, j) + seguro(points, i,j - 1) - seguro(points, i - 1, j - 1);
            if (M[i][j] == ':') points[i][j] += 1;
            hyphens[i][j] = seguro(hyphens, i - 1, j) + seguro(hyphens, i, j - 1) - seguro(hyphens, i - 1, j - 1);
            if (M[i][j] == '-') hyphens[i][j] += seguro(points, i - 1, j - 1);
            parentheses[i][j] = seguro(parentheses, i - 1, j) + seguro(parentheses, i, j - 1) - seguro(parentheses, i - 1, j - 1);
            if (M[i][j] == ')') parentheses[i][j] += seguro(hyphens, i - 1, j - 1);
        }
    }
    numHappy = seguro(parentheses, n - 1, m - 1);
    return numHappy;
}

vector<vector<char>> readMatrix(int n, int m) {
    vector<vector<char>> M(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> M[i][j];
        }
    }
    return M;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        vector<vector<char>> M(n, vector<char>(m));
        M = readMatrix(n, m);
        cout << countHappy(M, n, m) << endl;
    }
}
