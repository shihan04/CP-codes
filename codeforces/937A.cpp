#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,ans=0;
    cin>>n;
    bool b[601]={0};
    for(int i=0;i<n;i++){
        cin>>a;
        b[a]=1;
    }
    for(int i=1;i<=600;i++){
        ans+=b[i];
    }
    cout<<ans;
}
