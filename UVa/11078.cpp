#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],ans=-100000000,m[n],mx=100000000;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=n-1;i>=0;i--){
            mx=min(mx,a[i]);
            m[i]=mx;
        }
        for(int i=0;i<n-1;i++){
            ans=max(ans,a[i]-m[i+1]);
        }
        cout<<ans<<"\n";
    }
}
