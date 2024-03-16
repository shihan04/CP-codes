#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,ans=0,level[1000001],num[1000001]={0};
    cin>>n;
    level[1]=1;
    num[1]=1;
    for(int i=2;i<=n;i++){
        cin>>p;
        level[i]=level[p]+1;
        num[level[i]]++;
    }
    for(int i=1;i<=1000000;i++){
        ans+=num[i]%2;
    }
    cout<<ans;
}
