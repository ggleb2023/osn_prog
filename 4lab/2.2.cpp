#include <iostream>

using namespace std;

int main() {
    
    int a, b, c;
    cin >> a >> b >> c;
     
    (a == b || a == c || b == c) ? cout << "Treugolnik ravnobedrenen" : cout << "Treugolnik NE ravnobedrenen";
   
    return 0;
}
