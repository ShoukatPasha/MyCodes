#include<bits/stdc++.h>
using namespace std;

void print(int n, int a[]) {
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl; 
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    print(n, a);

    return 0;
}
