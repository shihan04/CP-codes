#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans;
    while(cin>>m>>n){
        if(n==0&&m==0) break;
        else if(min(n,m)==1) ans=max(n,m);
        else if(min(n,m)==2) ans=(max(n,m)%2)?max(n,m)+1:max(n,m)+max(n,m)%4;
        else ans=n*m/2+(n*m)%2;
        cout<<ans<<" knights may be placed on a "<<m<<" row "<<n<<" column board.\n";
    }
}
