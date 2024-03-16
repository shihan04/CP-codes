#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d,ans;
    cin>>a;
    cin>>b;
    d=abs(a-b);
    if(d%2==0) ans=(d/2)*(d/2+1);
    else ans=(d+1)/2*((d+1)/2+1)/2+(d-1)/2*((d-1)/2+1)/2;
    cout<<ans;
}
