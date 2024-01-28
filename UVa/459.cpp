#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        bool edge[26][26]={0},vis[26]={0};
        int ans=0,k;
        getline(cin,s);
        while(1){
            getline(cin,s);
            //cout<<s<<"\n";
            if(s.size()==0) break;
            edge[s[0]-'A'][s[1]-'A']=1;
            edge[s[1]-'A'][s[0]-'A']=1;
        }
        for(int i=0;i<=n-'A';i++){
            if(vis[i]) continue;
            ans++;
            //cout<<i<<" "<<vis[i]<<"\n";
            vis[i]=1;
            stack <int> st;
            st.push(i);
            while(!st.empty()){
                k=st.top();
                st.pop();
                for(int j=0;j<=n-'A';j++){
                    //cout<<edge[k][j]<<"\n";
                    if(edge[k][j] && !vis[j]){
                        vis[j]=1;
                        st.push(j);
                    }
                }
            }
        }
        cout<<ans<<"\n";
        if(t) cout<<"\n";
    }
    return 0;
}
