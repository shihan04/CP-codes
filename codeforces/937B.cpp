#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,y,x;
    cin>>p>>y;
    if(p==y){
        cout<<-1;
        return 0;
    }
    x=y;
    while(1){
        bool b=1;
        if(x==p) break;
        for(int i=2;i<=p&&i*i<=x;i++){
            if(x%i==0){
                b=0;
                break;
            }
        }
        if(b) break;
        x--;
    }
    if(x==p) cout<<-1;
    else cout<<x;
}
