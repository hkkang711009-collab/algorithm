#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    // 세 숫자를 입력받습니다.
    cin >> A >> B >> C;

    int result = A * B * C;

    // 0부터 9까지 개수를 저장할 배열 (모두 0으로 초기화)
    int counts[10] = {0};

    // 결과값이 0이 될 때까지 각 자릿수를 확인합니다.
    while (result > 0) {
        int digit = result % 10; // 마지막 자릿수 추출 (예: 17037300 -> 0)
        counts[digit]++;         // 해당 숫자 칸의 개수 1 증가
        result /= 10;            // 마지막 자릿수 제거 (예: 17037300 -> 1703730)
    }

    // 결과 출력 (0부터 9까지 순서대로)
    for (int i = 0; i < 10; i++) {
        cout << counts[i] << endl;
    }

    return 0;
}