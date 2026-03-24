#include <iostream>

int main() {
    using namespace std;
 
    int N;
    int arr[100];
    int v, count = 0;
    
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
