#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,ans=0;
    cin>>n;
    while(n--){
        cin>>a;
        if(a<=500000) ans=max(ans,a-1);
        else ans=max(ans,1000000-a);
    }
    cout<<ans;
}
