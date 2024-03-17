#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a,ans;
    cin>>l>>r>>a;
    if(l>r) swap(l,r);
    ans=(l+a<=r)?2*(l+a):2*r+(l+a-r)-(l+a-r)%2;
    cout<<ans;
}
