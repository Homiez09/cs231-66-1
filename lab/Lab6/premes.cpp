#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool isValidMove(int x, int y, int N) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

bool bfsCanReachBathroom(const vector<vector<int>>& forest, int N) {
    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    vector<vector<bool>> visited(N, vector<bool>(N, false));

    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == N - 1 && y == N - 1) {
            return true; 
        }

        for (const auto& dir : directions) {
            int newX = x + dir.first;
            int newY = y + dir.second;

            if (isValidMove(newX, newY, N) && forest[newX][newY] == 0 && !visited[newX][newY]) {
                visited[newX][newY] = true;
                q.push({newX, newY});
            }
        }
    }

    return false;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> forest(N, vector<int>(N, 0));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> forest[i][j];
        }
    }

    if (bfsCanReachBathroom(forest, N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
