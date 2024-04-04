#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1,n,r,ans;
    while(cin>>n>>r){
        if(n==0&&r==0) break;
        ans=ceil((n-r)/(r*1.0));
        if(ans>26) cout<<"Case "<<t<<": impossible\n";
        else cout<<"Case "<<t<<": "<<ans<<"\n";
        t++;
    }
}
