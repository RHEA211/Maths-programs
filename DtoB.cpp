//Binary to decimal
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int a[10];
    int i=0;
    cout<<"enter the number in binary -"<<endl;
    cin>>n;
    while(n!=0)
    {
        
        a[i]=n%2;
        n=n/2;
        i++;

    }
cout<<"the BINARY form -"<<endl;
for(int k=i-1;k>=0;k--)
{
    cout<<a[k];

}

    
}