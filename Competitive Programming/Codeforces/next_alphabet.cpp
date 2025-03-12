#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    
    if(ch == 'z'){
        ch = 'a';
    } else {
        ch++;
    }
    
    cout << ch << endl;
    return 0;
}