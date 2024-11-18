#include <iostream>

using namespace std;

int main() {
    
    int a, c; char b;
    cin >> a >> b >> c;
    
    int res;
    if (b == '+') res = a + c;
    if (b == '-') res = a - c;
    if (b == '*') res = a * c;
    if (b == '/' && (a != 0 || c != 0)) res = a / c;

    cout << res;

}
