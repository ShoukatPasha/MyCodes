#include<bits/stdc++.h>
using namespace std;
int printfact(int n)
{
    
    if(n==0)
    {
        return 1;
    }
   //printfact(n,n-1);
    return (n)*printfact(n-1);
   //printfact(n-1,n-2);

    
    
}
int main()
{
    int n,fact;
    cout<<"enter the number";
    cin>>n;
    fact=printfact(n);
    cout<<"the factorial is";
    cout<< fact;

}