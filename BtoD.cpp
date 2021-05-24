//Binary to Decimal
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bin,pow=1,mod,num=0;
    cout<<"Enter the Binary number-"<<endl;
    cin>>bin;
   while(bin!=0)
    {

    mod=bin%10;
    num=num+mod*pow;
    bin=bin/10;
    pow=pow*2;
    
}
cout<<"The decimal number is- "<<num;

}