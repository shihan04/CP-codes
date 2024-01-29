#include<bits/stdc++.h>
using namespace std;
void out_bar(int n){
    cout<<"+";
    for(int i=1;i<2*n;i++) cout<<"-";
    cout<<"+\n";
}
int main()
{
    int T,n,a,tmp;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>n;
        int edge[n][n],res[n];
        char dom[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>edge[i][j];
                dom[i][j]='N';
            }
        }
        for(int i=0;i<n;i++){
            dom[0][i]='Y';
        }
        for(int i=1;i<n;i++){
            dom[i][i]='Y';
        }
        for(int i=1;i<n;i++){
            bool vis[n]={0};
            stack <int> st;
            st.push(0);
            vis[0]=1;
            while(!st.empty()){
                tmp=st.top();
                st.pop();
                for(int j=0;j<n;j++){
                    if(edge[tmp][j] && !vis[j] && j!=i){
                        st.push(j);
                        vis[j]=1;
                    }
                }
            }
            for(int j=0;j<n;j++){
                if(!vis[j]) dom[i][j]='Y';
            }
        }
        cout<<"Case "<<t<<":\n";
        out_bar(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"|"<<dom[i][j];
            }
            cout<<"|\n";
            out_bar(n);
        }
    }
    return 0;
}
