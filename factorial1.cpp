//Finding factorial
//using loop
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,fact=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=2;i<=n;i++){
        fact=fact*i;
    }
    cout<<"the factorial is"<<" "<<fact;
    
}