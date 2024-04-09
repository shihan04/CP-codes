#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,x,y,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int m[107],p[a];
        bool w=0;
        for(int i=1;i<100;i++) m[i]=i;
        for(int i=100;i<107;i++) m[i]=100;
        for(int i=0;i<a;i++) p[i]=1;
        while(b--){
            cin>>x>>y;
            m[x]=y;
        }
        for(int i=0;i<c;i++){
            cin>>d;
            if(w) continue;
            p[i%a]=m[p[i%a]+d];
            if(p[i%a]==100) w=1;
        }
        for(int i=0;i<a;i++){
            cout<<"Position of player "<<i+1<<" is "<<p[i]<<".\n";
        }
    }
}
