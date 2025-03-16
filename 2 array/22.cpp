#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 2, 7, 9, 1};
    int size = sizeof(arr[0]);
    sort(arr, arr + size);

    int newSize = 1;  
    for (int i = 1; i < size; ++i) {
        if (arr[i] != arr[i - 1]) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
