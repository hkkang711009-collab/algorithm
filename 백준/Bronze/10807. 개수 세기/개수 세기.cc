#include <iostream>

int main() {
    using namespace std;
 
    int N; //받을 숫자
    int arr[100]; //숫자 담을 배열
    int v, count = 0; //찾을 숫자, 카운트
    
    cin >> N;
    
    for(int i=0; i<N; i++) {
        
        cin >> arr[i]; //배열에 숫자 대입
        
    }
    cin >> v;
 
    for (int i=0; i<N; i++) {
        
        if (arr[i]==v) { //숫자 찾았다면 count ++
            
            count ++;
            
        }
        
    }
    cout << count <<endl; //출력
}
