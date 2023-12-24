#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100];
    int i,j,n;
    cout<<"enter the range\n";
    cin>>n;
    printf("enter the matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
           
        }

        printf("\n");
    }
    printf("the diagonal matrix is\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                cout<<a[i][j]<<endl;
            }
        }
        printf("\n");
    }
    return 0;
}