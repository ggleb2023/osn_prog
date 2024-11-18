#include <iostream>

using namespace std;

int main() {
    
    int a, c; char b;
    cin >> a >> b >> c;
    
    int res;
    res = (b == '+') ? a+c : cout << "vvedite operator";
    res = (b == '-') ? a-c : cout << "vvedite operator";
    res = (b == '*') ? a*c : cout << "vvedite operator";
    res = (b == '/' && (a != 0 || c != 0)) ? a/c : cout << "vvedite operator";
    
    cout << res;

}
