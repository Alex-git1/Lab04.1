#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double N, D; 
    cout << "N: ";
    cin >> N;

    // 1. ������������ ����� while
    D = 1;
    int k = N;
    while (k <= 25) {
        D *= sqrt(1 + (N / k));
        k++;
    }

    // 2. ������������ ����� do-while
    D = 1;
    k = N;
    do {
        D *= sqrt(1 + (N / k));
        k++;
    } while (k <= 25);

    // 3. ������������ ����� for (� ������ ������)
    D = 1;
    for (k = N; k <= 25; k++) {
        D *= sqrt(1 + (N / k));
    }

    // 4. ������������ ����� for (� ������ �����)
    D = 1;
    for (k = 25; k >= N; k--) {
        D *= sqrt(1 + (N / k));
    }

    // ��������� ����������
    cout << D << endl;
    cout << D << endl;
    cout << D << endl;
    cout << D << endl;

    return 0;
}