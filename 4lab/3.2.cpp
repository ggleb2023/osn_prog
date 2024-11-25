#include <iostream>

using namespace std;

int main() {
    int a, c;
    char b;
    cin >> a >> b >> c;

    int res;
    bool op = (b == '+' || b == '-' || b == '*' || (b == '/' && c != 0));

    (b == '+') ? res = a + c : 
    (b == '-') ? res = a - c : 
    (b == '*') ? res = a * c : 
    (b == '/' && c != 0) ? res = a / c : res = 0;

    op ? cout << res : cout << "error zero or write correctly" << endl;

    return 0;
}
