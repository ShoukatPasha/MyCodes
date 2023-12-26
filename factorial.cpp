#include<bits/stdc++.h>
using namespace std;
int printfact(int n,int fact)
{
    
    if(n==0)
    {
        return 1;
    }
   //printfact(n,n-1);
    fact=(n)*printfact(n-1,n-2);
   //printfact(n-1,n-2);

    return fact;
    
}
int main()
{
    int n,fact=1;
    cout<<"enter the number";
    cin>>n;
    fact=printfact(n,fact);
    cout<<"the factorial is";
   cout<< fact;

}