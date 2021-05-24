//Fibonacci sequence of n terms
//the number is sum of previous 2 numbers
//0,1,1,2,3,5,8.... we know term1=0, term2=0 next find out...

#include<bits/stdc++.h>
using namespace std;


void fib(int n) {
    int term1=0;
    int term2=1;
   int currenterm ;

   for(int i=1;i<=n;i++)
   {cout<<term1<< " ";
       currenterm =term1+term2;
    term1=term2;
    term2=currenterm;
    }
    return;
}





int main()
{
    int n;
    cout<<"Enter how many terms of fibonacci you need-"<<endl;
    cin>>n;
    fib(n);
    return 0;

}