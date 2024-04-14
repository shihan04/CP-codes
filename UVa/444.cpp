#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans;
    while(getline(cin,s)){
        ans="";
        if(s[0]>='0'&&s[0]<='9'){
            reverse(s.begin(),s.end());
            for(int i=0;i<s.size();){
                if(s[i]=='1'){
                    ans+=(char)(100*(s[i]-'0')+10*(s[i+1]-'0')+s[i+2]-'0');
                    i+=3;
                }
                else{
                    ans+=(char)(10*(s[i]-'0')+s[i+1]-'0');
                    i+=2;
                }
            }
        }
        else{
            for(int i=0;i<s.size();i++){
                ans+=to_string((int)s[i]);
            }
            reverse(ans.begin(),ans.end());
        }
        cout<<ans<<"\n";
    }
}
