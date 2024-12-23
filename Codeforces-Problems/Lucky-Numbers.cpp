#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int d1 = num % 10;
    int d2 = (num / 10) % 10;

    if (d1 != 0 && d2 % d1 == 0 || d2 != 0 && d1 % d2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
