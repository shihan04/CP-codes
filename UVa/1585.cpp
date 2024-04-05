#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,ans;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        x=0;ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='X'){
                x=0;
            }
            else{
                x++;
                ans+=x;
            }
        }
        cout<<ans<<"\n";
    }
}
