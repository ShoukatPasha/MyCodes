#include<bits/stdc++.h>
using namespace std;

int findminRecursive(int n, int a[])
{
    if (n == 1) {
        return a[0];
    }

   
    int minRest = findminRecursive(n-1, a);

    if (a[n-1] <minRest) {
        return a[n - 1];
    } else {
        return minRest;
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

    int minElement = findminRecursive(n, a);

    cout << "The minimum element in the array is: " << minElement << endl;

    return 0;
}
