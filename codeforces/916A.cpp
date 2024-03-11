#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,ans=0,c,h,m;
    cin>>x;
    cin>>h>>m;
    while(1){
        if(h%10==7||(h-h%10)/10==7||m%10==7||(m-m%10)/10==7) break;
        ans++;
        c=0;
        if(m>=x) m-=x;
        else{
            m=60+m-x;
            if(h>0) h--;
            else h=23;
        }
    }
    cout<<ans;
}
