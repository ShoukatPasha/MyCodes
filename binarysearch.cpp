#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, key, n, a[100], mid, first, last;
    
  
    cout << "Enter the range: ";
    cin >> n;
    
    cout << "Enter the values: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
   
    cout << "Enter key element: ";
    cin >> key;
    
   
    first = 0;
    last = n - 1;
    
    
    while (first <= last) {
        mid = (first + last) / 2;
        
        if (a[mid] == key) {
            cout << "Element found at index " << mid << endl;
            break;  
        } else if (key > a[mid]) {
            first = mid + 1;  
        } else {
            last = mid - 1;  
        }
    }
    
    if (first > last) {
        cout << "Element not found" << endl;
    }

    return 0;
}
