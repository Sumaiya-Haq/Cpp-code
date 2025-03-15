#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int index = -1;  

    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            index = i; 
            break;  
        }
    }

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
