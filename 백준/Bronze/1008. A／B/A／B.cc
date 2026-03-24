#include <iostream>
#include <iomanip>

int main() {
    using namespace std;
    
    int a, b;
    
    cin >> a >> b;
    
    double c = (double)a/b;
    
    cout << fixed << setprecision(9);
    cout << c << endl;
}
