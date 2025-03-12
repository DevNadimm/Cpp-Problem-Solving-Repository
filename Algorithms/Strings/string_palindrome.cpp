#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverseString(string input) {
    int length = input.size();
    int start = 0, end = length - 1;
    while (start < end) {
        swap(input[start], input[end]);
        start++;
        end--;
    }
    return input;
}

int main() {
    vector<string> words = {"abc", "car", "ada", "racecar", "cool"};
    vector<string> reversedWords;
    vector<string> palindromes;

    for (string word : words) {
        reversedWords.push_back(reverseString(word));
    }

    for (int i = 0; i < words.size(); i++) {
        if (words[i] == reversedWords[i]) {
            string palindrome = words[i];
            palindromes.push_back(palindrome);
        }
    }

    for (string palindrome : palindromes) {
        cout << palindrome << " ";
    }

    return 0;
}
