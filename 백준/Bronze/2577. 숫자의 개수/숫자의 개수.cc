#include <iostream>

int main() {
    using namespace std;
    
    int A, B, C;
    cin >> A >> B >> C;
    
    int result;
    result = A*B*C;
    
    int counts[10]={};
    
    while (result >0) {
        int num = result%10;
        counts[num] ++;
        
        result = result/10;
    }
    
    for(int i=0; i<=9; i++) {
        
        cout << counts[i] << endl;
        
    }
    
}