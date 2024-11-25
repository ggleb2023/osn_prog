#include <iostream>

int main() {

    using namespace std;

    int a, b, c, d;
    
    cout << "a & b";
    cin >> a >> b;
    
    cout << "c & d";
    cin >> c >> d;
    
    if ((a < c && b < d) || (a < d && b < c)) {
        cout << "you can" << endl;
    } else {
        cout << "you can not" << endl;
    }
    
    return 0;
}
