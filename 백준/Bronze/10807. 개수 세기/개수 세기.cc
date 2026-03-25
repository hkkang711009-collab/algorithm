#include <iostream>

int main() {
    using namespace std;
 
    int N; //받을 숫자
    int arr[100]; //숫자 담을 배열
    int v, count = 0; //찾을 숫자, 카운트
    
    cin >> N;
    
    for(int i=0; i<N; i++) {
        
        cin >> arr[i];
        
    }
    cin >> v;
 
    for (int i=0; i<N; i++) {
        
        if (arr[i]==v) {
            
            count ++;
            
        }
        
    }
    cout << count <<endl;
}
