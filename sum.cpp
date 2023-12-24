#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100],sum[100][100],b[100][100];
    int i,j,n;
    cout<<"Enter range\n";
    cin>>n;
    cout<<"enter matrix";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
         printf("enter matrix a[%d,%d]",i,j);
          cin>>a[i][j];
          printf("enter matrix b[%d,%d]",i,j);
          cin>>b[i][j];
        
        }
        
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            sum[i][j]=0;
            sum[i][j]=a[i][j]+b[i][j];
            cout<<sum[i][j]<<"\t";
            
        }
       // cout<<sum[i][j]<<"\n";
       cout<<"\n";
    }
    return 0;
}