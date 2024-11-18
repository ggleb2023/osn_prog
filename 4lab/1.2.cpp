#include <iostream>

using namespace std;

int main() {
    
    int n, s, d, e, p, c;
    
     cin >> n;
    
    s = n / 100;
    d = (n / 10) % 10;
    e = n % 10;
    c = (s + d + e) % 2;

    cout << endl << c << endl;

    c == 0 ? cout << "Yes" : cout << "No";
    
    return 0;
}
