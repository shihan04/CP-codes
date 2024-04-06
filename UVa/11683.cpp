#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,t,h,ans;
    while(cin>>a>>c){
        if(a==0&&c==0) break;
        int x[c+1];
        for(int i=0;i<c;i++) cin>>x[i];
        x[c]=a;
        t=0;h=a;ans=0;
        for(int i=0;i<=c;i++){
            if(x[i]<h){
                t+=h-x[i];
                h=x[i];
            }
            else if(x[i]>h){
                t-=x[i]-h;
                ans+=x[i]-h;
                h=x[i];
            }
        }
        cout<<ans<<"\n";
    }
}
