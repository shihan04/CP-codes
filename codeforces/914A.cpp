#include<bits/stdc++.h>
using namespace std;
bool is_square(int s){
    if(s==0) return true;
    for(int i=1;i*i<=s;i++){
        if(i*i==s) return true;
    }
    return false;
}
int main()
{
    int n,a,ans=-9e6;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(!is_square(a)){
            ans=max(ans,a);
        }
    }
    cout<<ans;
}
