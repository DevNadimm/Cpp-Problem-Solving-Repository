// Problem Link: https://leetcode.com/problems/excel-sheet-column-number/description/

#include <iostream>
#include <String>
#include <cmath>
using namespace std;

int letterToNum (char letter) {
    if(letter >= 'A' && letter <= 'Z'){
        return (letter - 'A') + 1;
    }
}

int titleToNumber(string columnTitle) {
    int total = 0, index = 0;
    for (int i =  columnTitle.length() - 1; i >= 0; i--){
        if(i == columnTitle.length() - 1) {
            total += letterToNum(columnTitle[i]);
        } else {
            total += letterToNum(columnTitle[i]) * pow(26, index);
        }
        
        index++;
    }
    
    return total;
}

int main() {
    cout << titleToNumber("FXSHRXW") << endl; // 2147483647
    return 0;
}