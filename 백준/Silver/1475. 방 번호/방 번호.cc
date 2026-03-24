#include <iostream>

int main() {
    using namespace std;
    
    int address;
    int counts[10]={0};
    
    cin >> address;
    
    if (address ==0) {
        
        counts[0]=1;
    }
    
    while (address>0) {
        int num = address%10;
        counts[num] ++;
        address = address/10;
        
    }
    
    int a = counts[6]+counts[9];
    counts[6] = (a+1)/2;
    counts[9] = 0;
    int b = 0;
    
    for (int i=0;i<=9;i++) {
        if (b<counts[i]) {
            
            b = counts[i];
            
        }
        
        
    }
    cout << b << endl;
}