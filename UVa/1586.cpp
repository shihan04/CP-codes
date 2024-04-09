#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        double ans=0,mass,n;
        for(int i=0;i<s.size();){
            if(s[i]=='C') mass=12.01;
            else if(s[i]=='H') mass=1.008;
            else if(s[i]=='O') mass=16.00;
            else if(s[i]=='N') mass=14.01;
            i++;
            if(i<s.size()-1&&s[i]>='0'&&s[i]<='9'&&s[i+1]>='0'&&s[i+1]<='9'){
                n=s[i+1]-'0'+10*(s[i]-'0');
                i+=2;
            }
            else if(i<s.size()&&s[i]>='0'&&s[i]<='9'){
                n=s[i]-'0';
                i++;
            }
            else n=1.0;
            ans+=n*mass;
        }
        cout<<fixed<<setprecision(3)<<ans<<"\n";
    }
}
