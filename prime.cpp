//Check prime number
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,i;
    bool flag=0;
    cout<<"enter the number"<<endl;
    cin>>num;
    for(i=2;i<num;i++)

     {  
        if(num%i==0)
        {cout<<"NOT A prime number";
        flag=1;
        break;}
     }

        if(flag==0)
       { cout<<"Prime";}
    }


