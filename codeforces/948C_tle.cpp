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
        for(int j=0;j<=i;j++){
            ans+=(v[j]>=s[i]-s[j])?min(t[i],v[j]-s[i]+s[j]):0;
        }
        cout<<ans<<" ";
    }
}
