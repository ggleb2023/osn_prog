#include <iostream>

using namespace std;

int main() {
    int a, c;
    char b;
    cin >> a >> b >> c;

    int res;
    bool IsOpValid = true;

    switch (b) {
        case '+':
            res = a + c;
            break;
        case '-':
            res = a - c;
            break;
        case '*':
            res = a * c;
            break;
        case '/':
            if (c != 0) {
                res = a / c;
            } else {
                cout << "error zero" << endl;
                IsOpValid = false;
            }
            break;
        default:
            cout << "error write correctly" << endl;
            IsOpValid = false;
            break;
    }

    if (IsOpValid) {
        cout << res << endl;
    }

    return 0;
}
