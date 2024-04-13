#include<bits/stdc++.h>
using namespace std;
int led(char c){
    if(c=='0') return 6;
    else if(c=='1') return 2;
    else if(c=='2') return 5;
    else if(c=='3') return 5;
    else if(c=='4') return 4;
    else if(c=='5') return 5;
    else if(c=='6') return 6;
    else if(c=='7') return 3;
    else if(c=='8') return 7;
    else if(c=='9') return 6;
    return 0;
}
int main()
{
    string t,cmd,team,s1,s2;
    for(int tc=1;cin>>cmd>>t;tc++){
        int pt=3600*(10*(t[0]-'0')+t[1]-'0')+60*(10*(t[3]-'0')+t[4]-'0')+10*(t[6]-'0')+t[7]-'0',ans=0,ct,g=0,h=0,point,d;
        cin>>cmd>>t;
        while(cmd!="END"){
            cin>>team>>point;
            ct=3600*(10*(t[0]-'0')+t[1]-'0')+60*(10*(t[3]-'0')+t[4]-'0')+10*(t[6]-'0')+t[7]-'0';
            d=ct-pt;
            s1=to_string(h);
            s2=to_string(g);
            for(int i=0;i<s1.size();i++) ans+=d*led(s1[i]);
            for(int i=0;i<s2.size();i++) ans+=d*led(s2[i]);
            pt=ct;
            if(team=="home") h+=point;
            else g+=point;
            cin>>cmd>>t;
        }
        ct=3600*(10*(t[0]-'0')+t[1]-'0')+60*(10*(t[3]-'0')+t[4]-'0')+10*(t[6]-'0')+t[7]-'0';
        d=ct-pt;
        s1=to_string(h);
        s2=to_string(g);
        for(int i=0;i<s1.size();i++) ans+=d*led(s1[i]);
        for(int i=0;i<s2.size();i++) ans+=d*led(s2[i]);
        cout<<"Case "<<tc<<": "<<ans<<"\n";
    }
}
