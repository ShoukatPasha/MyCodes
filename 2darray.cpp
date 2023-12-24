#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100];
    int i,j,n;
    cout<<"enter n range\n";
    cin>>n;
    for(i=0;i<n;i++)
    { 
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        

    }
    cout<<"the values are\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    return 0;
}