#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],max,i,n,j;
    cout<<"enter range:\n";
    cin>>n;
    cout<<"enter the values\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n+1;j++)
        max=a[i];
        if(a[i]>a[i+1])
        {
            max=a[i];
            a[i]=a[1+1];
            a[i+1]=max;
        
        }
    
        
    }
    cout<<"the greatest number is :\n"; 
   cout<<max;
    return max;
    
}