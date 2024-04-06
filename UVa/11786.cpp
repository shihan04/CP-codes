#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int d=0,c,x[s.size()],mx=0,mn=0,ans=0;
        x[0]=0;
        for(int i=1;i<s.size();i++){
            if((s[i]=='\\'&&s[i-1]=='\\')||(s[i]=='_'&&s[i-1]=='\\')){
                d--;
            }
            else if((s[i]=='/'&&s[i-1]=='/')||(s[i]=='/'&&s[i-1]=='_')){
                d++;
            }
            x[i]=d;
            mx=max(mx,d);
            mn=min(mn,d);
        }
        for(int i=mx;i>=mn;i--){
            for(int j=0;j<s.size();){
                if(s[j]=='\\'&&x[j]==i){
                    c=0;
                    while(j<s.size()&&(s[j]!='/'||x[j]<i)){
                        j++;
                        c++;
                    }
                    if(j==s.size()&&(s[j]!='/'||x[j]<i)) continue;
                    ans+=c;
                }
                else{
                    j++;
                }
            }
        }
        cout<<ans<<"\n";
    }
}
