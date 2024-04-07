#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ans,l;
    while(cin>>n>>a>>b){
        ans=1;
        for(int i=2,l=1<<n;i<=l;i<<=1,ans++){
            bool c=0;
            for(int j=i;j<=l;j+=i){
                if(a<=j&&b<=j&&a>j-i&&b>j-i){
                    c=1;
                    break;
                }
            }
            if(c) break;
        }
        cout<<ans<<"\n";
    }
}
