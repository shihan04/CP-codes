#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,l,x,y,z;
    cin>>t;
    while(t--){
        cin>>n>>m>>l;
        bool vis[n+1]={0};
        int ans=0,tmp;
        vector <vector<int>> node(n+1);
        for(int i=0;i<m;i++){
            cin>>x>>y;
            node[x].push_back(y);
        }
        while(l--){
            cin>>z;
            if(vis[z]) continue;
            queue <int> st;
            st.push(z);
            while(!st.empty()){
                tmp=st.front();
                st.pop();
                if(vis[tmp]) continue;
                //cout<<tmp<<" ";
                ans++;
                vis[tmp]=1;
                for(int i=0;i<node[tmp].size();i++){
                    if(vis[node[tmp][i]]) continue;
                    st.push(node[tmp][i]);
                }
            }
            //cout<<"/\n";
        }
        cout<<ans<<"\n";
    }
    return 0;
}
