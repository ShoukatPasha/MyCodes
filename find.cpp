#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100];
   int i,j,n,se;
   
    cout<<"enter te range\n";
    cin>>n;
  cout<<"enter the matrix\n";
  
  
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
            
        }
        printf("\n");
    }
   cout<<"enter search element\n";
  cin>>se;
  
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
        if(a[i][j]==se)
        {
            printf("element found");
        }
       
    }
  }
  
   
    
    return 0;
}