//Pascal Triangle
/*
1                   |   0C0
1 1                 |   1C0 1C1
1 2 1               |   2C0 2C1 2C2
1 3 3 1             |   3C0 3C1 3C2 3C3
1 4 6 4 1           |   4C0 4C1 4C2 4C3 4C4
*/
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int facto=1;
    for(int i=2;i<=n;i++)
    {facto=facto*i;}
    return facto;

}
int main()
{
   int i,j;
   int n;
    cout<<"enter the rows you want to be printed-"<<endl;
    cin>>n;

    for(i=0;i<n;i++){

        for(j=0;j<=i;j++){

            cout<<fact(i)/(fact(i-j)*fact(j))<<"  ";

        }

        cout<<endl;
    }
return 0;
}