#include <iostream>
using namespace std;

int a[100001];
bool occur[2000001];

int main() {
    int n, x, count = 0;

    //전체 개수, 숫자 배열, 목표 합(x) 받기
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;

    //배열을 돌면서 조건에 맞는 쌍 찾기
    for (int i = 0; i < n; i++) {
        int target = x - a[i];

        if (target > 0 && target <= 2000000 && occur[target]) {
            count++;
        }

        occur[a[i]] = true;
    }

    //최종 출력
    cout << count;
    
    return 0;
}