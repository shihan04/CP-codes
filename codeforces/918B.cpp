#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s,ip;
    map <string,string> mp;
    for(int i=0;i<n;i++){
        cin>>s>>ip;
        mp[ip+';']=s;
    }
    for(int i=0;i<m;i++){
        cin>>s>>ip;
        cout<<s<<" "<<ip<<" #"<<mp[ip]<<"\n";
    }
}
