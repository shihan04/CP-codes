#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int ans=0,v[n],t[n],s[n+1]={0};
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>t[i];
        s[i+1]=s[i]+t[i];
    }
    for(int i=0;i<n;i++){
        ans=0;
        for(int j=0,k=i;j<=i;j++,k--){
            ans+=(v[i]>=s[k])?min(t[i],v[i]-s[k]):0;
        }
        cout<<ans<<" ";
    }
}
