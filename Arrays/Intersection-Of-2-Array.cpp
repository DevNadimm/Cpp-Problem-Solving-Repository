#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7};

    int size = sizeof(arr) / sizeof(arr[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    for (int i = 0; i < size; i++){
        bool isCommon = false;
        for (int j = 0; j < size2; j++){
            if (arr[i] == arr2[j]){
                isCommon = true;
                break;
            }
        }
        
        if (isCommon){
            cout << arr[i] << " ";
        }
        
    }
    
    return 0;
}
