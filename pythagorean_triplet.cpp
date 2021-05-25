#include<bits/stdc++.h>
using namespace std;

//input 3 numbers and verify PT or not

bool pythagorean(int x,int y,int z)
{
    int large= max(x,max(y,z));
    
    int a,b;
    //check which is the largest number

    if (large==x)
    {a=y;
    b=z;
}

else if(large==y){
    a=x;b=z;

}

else{
    a=x;b=y;
}

if (large*large==(a*a)+ (b*b))
{return true;}

else
{return false;}

}

int main(){
    int x,y,z;
    cin>>x>>y>>z;

    if (pythagorean(x,y,z))
    {cout<<"IT IS A PYTHAGOREAN TRIPLET";}

    else{
        cout<<"NOT A PYTHAGOREAN TRIPLET";
    }
}
