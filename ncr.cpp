#include<bits/stdc++.h>
using namespace std;
//nCr
int fact(int n) 
{
    int facto=1,i;
    for(i=2;i<=n;i++)
    {
        facto=facto*i;

    }
    return facto;
}

int main()
{
    int n,r;
    cout<<"enter the value of n,r-"<<endl;
    cin>>n>>r;
    int ans=fact(n)/(fact(n-r)*fact(r));
    cout<<"nCr is-"<<ans;
}