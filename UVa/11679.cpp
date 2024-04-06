#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,n,d,c,v;
    while(cin>>b>>n){
        if(b==0&&n==0) break;
        int r[b+1];
        for(int i=1;i<=b;i++) cin>>r[i];
        for(int i=0;i<n;i++){
            cin>>d>>c>>v;
            r[d]-=v;
            r[c]+=v;
        }
        bool t=0;
        for(int i=1;i<=b;i++){
            if(r[i]<0){
                t=1;
                break;
            }
        }
        if(t) cout<<"N\n";
        else cout<<"S\n";
    }
}
