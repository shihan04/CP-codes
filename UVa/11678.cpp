#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b){
        if(a==0&&b==0) break;
        int m=0,n=0,x[100001]={0},y[100001]={0};
        for(int i=0;i<a;i++){
            cin>>c;
            x[c]=1;
        }
        for(int i=0;i<b;i++){
            cin>>c;
            y[c]=1;
        }
        for(int i=1;i<=100000;i++){
            if(x[i]==1&&y[i]==1) continue;
            m+=x[i];
            n+=y[i];
        }
        cout<<min(n,m)<<"\n";
    }
}
