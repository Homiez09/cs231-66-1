#include <iostream>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int pass[h][w];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> pass[i][j];
        }
    }

    for (int i = 0; i < h-1; i++) {
        int temp[w];
        for (int j = 0; j < w; j++) {
            temp[j] = pass[i+1][pass[i][j]-1];
        }
        for (int j = 0; j < w; j++) {
            pass[i+1][j] = temp[j];
        }
    }

    for (int i = 0; i < w; i++) {
        cout << pass[h-1][i] << " ";
    }
    return 0;
}