#include <iostream>

using namespace std;

int main() {
    int numStudent;
    cin >> numStudent;

    int students[numStudent][3];

    int avg[3] = {0, 0, 0};
    int avgStudent = 0;

    for (int i = 0; i < numStudent; i++) {
        cin >> students[i][0] >> students[i][1] >> students[i][2];
        avg[0] += students[i][0];
        avg[1] += students[i][1];
        avg[2] += students[i][2];
        avgStudent += students[i][0] + students[i][1] + students[i][2];
    }

    avg[0] /= numStudent;
    avg[1] /= numStudent;
    avg[2] /= numStudent;
    avgStudent /= numStudent;


    for (int i = 0; i < numStudent; i++) {
        int chkPass = 0;
        int temp = 0;
        if (students[i][0] == 0 || students[i][1] == 0 || students[i][2] == 0) continue;
        chkPass++;
        if ((students[i][0] + students[i][1] + students[i][2]) > avgStudent) chkPass++;
        
        for (int j = 0; j < 3; j++) {
            if (students[i][j] > avg[j]) temp++;
        }
        if (temp >= 2) chkPass++;
        
        if (chkPass == 3) cout << i+1 << " ";
    }

    return 0;
}