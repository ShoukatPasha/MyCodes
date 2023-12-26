#include<bits/stdc++.h>
using namespace std;

int findMaxRecursive(int n, int a[])
{
    if (n == 1) {
        return a[0];
    }

   
    int maxRest = findMaxRecursive(n - 1, a);

    if (a[n - 1] > maxRest) {
        return a[n - 1];
    } else {
        return maxRest;
    }
}

int main()
{
    int n, a[100];
    cout << "Enter range: ";
    cin >> n;

    cout << "Enter the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxElement = findMaxRecursive(n, a);

    cout << "The maximum element in the array is: " << maxElement << endl;

    return 0;
}
