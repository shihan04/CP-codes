#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int a[n],b[m],p,ans=1e18;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        p=-1e18;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            for(int k=0;k<m;k++) p=max(a[j]*b[k],p);
        }
        ans=min(p,ans);
    }
    cout<<ans;
}
