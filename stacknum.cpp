#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;

    cout << "Enter the number of elements: ";
    cin >> n;

    stack<int> st;

    cout << "Enter " << n << " numbers:\n";
    for (i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        st.push(num);
    }

    int arr[n];
    for (i = 0; i < n; i++)
    {
        arr[i] = st.top();
        st.pop();
    }

    cout << "Reversed array: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
