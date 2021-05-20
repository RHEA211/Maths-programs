//Armstrong number
// Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself.
// For example 0, 1, 153, 370, 371 and 407

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,sum=0;
    cout<<"Enter the number to be checked"<<endl;
    cin>>num;
    int n=num;

    while(n>0)

   {int m=n%10;
  
   sum=sum+m*m*m;
   n=n/10;
   }

    if(num==sum){
        cout<<"The number is ARMSTRONG."<<endl;

    }
    else{
        cout<<"THe number is not armstrong";
    }





}