#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int A,B,x,y,z,ans=0,ry,rb;
    cin>>A>>B;
    cin>>x>>y>>z;
    ry=2*x+y;
    rb=y+3*z;
    if(A<ry) ans+=ry-A;
    if(B<rb) ans+=rb-B;
    cout<<ans;
}
