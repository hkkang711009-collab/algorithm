#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int result = A * B * C;
    int counts[10] = {0};

    while (result > 0) {
        int digit = result % 10; 
        counts[digit]++;         
        result /= 10;            
    }

    for (int i = 0; i < 10; i++) {
        cout << counts[i] << endl;
    }

    return 0;
}