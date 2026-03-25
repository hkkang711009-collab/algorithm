#include <iostream>
using namespace std;

int main() {
    int N, K;
    int students[2][7] = {0}; //방 만들기
    int totalRooms = 0;

    cin >> N >> K;

    for (int i = 0; i < N; i++) { //학생 성별, 학년 입력
        int s, y;
        cin >> s >> y;
        students[s][y]++;
    }

    for (int s = 0; s < 2; s++) { //방 나누기
        for (int y = 1; y <= 6; y++) {
            int num = students[s][y];
            if (num > 0) {
                totalRooms += num / K;
                if (num % K != 0) {
                    totalRooms++;
                }
            }
        }
    }

    cout << totalRooms << endl;

    return 0;
}
