#include <iostream>
#include <algorithm>

#define MAX_SIZE 1000001

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int maxIceCreamSold(int N, int T, int P[]) {
    int maxCustomers = 0;

    for (int i = 0; i < N; i++) {
        if ((P[i] >= T || T >= P[i]) && P[i] > 0) {
            if (T <= 0) {
                break;
            } else {
                T -= 1;
                maxCustomers++;
                for (int j = i; j < N; j++) {
                    P[j] -= 1;
                }
            }
        } else if (T == 0) {
            break;
        } else {
            continue;
        }
    }

    return maxCustomers;
}

int main() {
    int N, T;
    std::cin >> N >> T;
    int *P = new int[MAX_SIZE];

    for (int i = 0; i < N; i++) {
        std::cin >> P[i];
    }

    std::qsort(P, N, sizeof(int), compare);


    int result = maxIceCreamSold(N, T, P);
    std::cout << result << std::endl;
    
    delete[] P;
    return 0;
}
