#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,l,r;
    string w1,w2,s1,s2;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        cin>>w1>>w2;
        cin>>s1>>s2;
        a=60*(10*(w1[0]-'0')+w1[1]-'0')+10*(w1[3]-'0')+w1[4]-'0';
        b=60*(10*(w2[0]-'0')+w2[1]-'0')+10*(w2[3]-'0')+w2[4]-'0';
        l=60*(10*(s1[0]-'0')+s1[1]-'0')+10*(s1[3]-'0')+s1[4]-'0';
        r=60*(10*(s2[0]-'0')+s2[1]-'0')+10*(s2[3]-'0')+s2[4]-'0';
        cout<<"Case "<<tc<<": ";
        if((r<a)||(b<l)) cout<<"Hits Meeting\n";
        else cout<<"Mrs Meeting\n";
    }
}
