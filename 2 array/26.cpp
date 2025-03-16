#include <iostream>
using namespace std;

int main() {
    int a, b, c = 0;
    
    cout << "Enter the size of an array: ";
    cin >> a;
    
    int A[a]; 
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < a; i++) {
        cin >> A[i];
    }
    
    cout << "Enter the target element to find: ";
    cin >> b;
    
    for (int i = 0; i < a; i++) {
        if (A[i] == b) {
            cout << "Element found at index: " << i + 1 << endl;
            c = 1;
            break;  
        }
    }
    
    if (c == 0) {
        cout << "-1" << endl;  
    }
    
    return 0;
}
