#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double N, D; 
    cout << "N: ";
    cin >> N;

    // 1. Використання циклу while
    D = 1;
    int k = N;
    while (k <= 25) {
        D *= sqrt(1 + (N / k));
        k++;
    }

    // 2. Використання циклу do-while
    D = 1;
    k = N;
    do {
        D *= sqrt(1 + (N / k));
        k++;
    } while (k <= 25);

    // 3. Використання циклу for (з кроком вперед)
    D = 1;
    for (k = N; k <= 25; k++) {
        D *= sqrt(1 + (N / k));
    }

    // 4. Використання циклу for (з кроком назад)
    D = 1;
    for (k = 25; k >= N; k--) {
        D *= sqrt(1 + (N / k));
    }

    // Виведення результатів
    cout << D << endl;
    cout << D << endl;
    cout << D << endl;
    cout << D << endl;

    return 0;
}