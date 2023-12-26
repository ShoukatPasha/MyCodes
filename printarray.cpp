#include<bits/stdc++.h>
using namespace std;

void printrecursive(int a[], int n)
{
    if(n == 0)
    {
        return;
    }
     cout << a[n-1] << " ";
    
    printrecursive(a,n-1);
    
    //cout << a[n-1] << " ";
}


int main()
{
    int a[100];
    int n;
    cout << "Enter range: ";
    cin >> n;
    cout << "Enter the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    printrecursive(a, n);
    
    return 0;
}