#include <iostream>

using namespace std;

int main() {
    int data[] = {1, 15, 5 ,7 , 10, 9, 10, 3, 45, 155,  56, 18, 88, 23, 99, 111, 100};
    //1, 3, 5, 7, 9, 10, 10, 15, 18, 23, 45, 56, 88, 99, 100, 111, 155
    // i want search 5 in data?
    int search[] = {5, 90};
    int index = -1;
    int count = 0;
    for (int i = 0; i < sizeof(data)/sizeof(int); i++) {
        count++;
        if (data[i] == search[0]) {
            index = i;
            break;
        }
    }
     if (index == -1) {
        cout << "Not found" << endl;
    } else {
        cout << "Found at index: " << index << endl;
    }
    index = -1;
    cout << "Count: " << count << endl;
    count = 0;
    for (int i = 0; i < sizeof(data)/sizeof(int); i++) {
        count++;
        if (data[i] == search[1]) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Not found" << endl;
    } else {
        cout << "Found at index: " << index << endl;
    }
    cout << "Count: " << count << endl;
    return 0;
}