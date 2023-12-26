#include<bits/stdc++.h>
using namespace std;

void printrecursive(int n)
{
    if (n == 0)
    {
        return;
    }
    printrecursive(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter range: ";
    cin >> n;
    printrecursive(n);
    
    return 0;
}
