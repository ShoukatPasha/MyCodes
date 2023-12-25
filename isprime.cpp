#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    cout<<"enter the number";
    cin>>n;
    if(n<2)
    {
        
        return 0;
    }
  /* if(n%2==0&&n>2)
    {
        return 0;
    }
   */

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    int n;
    
   int flag=isprime(n);
   // cout<<"enter value\n";
    //cin>>n;
    if(flag==1)
    {
        printf("prime");
    }
        else 
        {
            printf("not a prime");
        }
    
}