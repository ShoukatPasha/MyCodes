#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n1, int n2, int n3,int terms) {
  
    if(terms==0)
    {
        return;
    }
    
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
        fibonacci(n1, n2, n3,terms-1);
    
}

int main() {
    int n1 = 0, n2 = 1, n3;
    int range;

    cout << "Enter the range\n";
    cin >> range;

    cout << n1 << " ";
    cout << n2 << " ";

    fibonacci(n1, n2, n3,range-2);

    return 0;
}
