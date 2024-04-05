#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double p,a,b,c,d;
    while(cin>>p>>a>>b>>c>>d>>n){
        double s[n+1],ans=-1e15,mx=0;
        for(int i=1;i<=n;i++){
            s[i]=p * (sin(a * i + b) + cos(c * i + d) + 2.0);
        }
        mx=s[1];
        for(int i=2;i<=n;i++){
            if(mx>s[i]){
                ans=max(ans,mx-s[i]);
            }
            else{
                mx=s[i];
            }
        }
        ans=max(ans,mx-s[n]);
        cout<<fixed<<setprecision(9)<<ans<<"\n";
    }
}
