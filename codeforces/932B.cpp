#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q,l,r,k,a;
    vector <int> v(1000001,0);
    vector <vector<int>> s(9,v);
    string st;
    for(int i=0;i<9;i++) s[i][0]=0;
    cin>>Q;
    for(int x=1;x<=1000000;x++){
        a=x;
        do{
            st=to_string(a);
            a=1;
            for(int i=0;i<st.size();i++){
                if(st[i]=='0') continue;
                a*=st[i]-'0';
            }
        }while(a>9);
        for(int i=0;i<9;i++) s[i][x]=s[i][x-1];
        s[a-1][x]++;
    }
    while(Q--){
        cin>>l>>r>>k;
        cout<<s[k-1][r]-s[k-1][l-1]<<"\n";
    }
}
